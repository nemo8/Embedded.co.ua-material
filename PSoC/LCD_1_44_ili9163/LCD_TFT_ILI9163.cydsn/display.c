#include "display.h"

// Reset the LCD hardware
void LcdReset(void) 
{
    // 0 = reset, 1 = ready
	RST_Write(0);
    CyDelay(50);
    RST_Write(1);
    CyDelay(20);
}
//rotate screen at desired orientation
void setLcdOrientation(uint8_t orientation) 
{
	writeCommand(SET_ADDRESS_MODE);
	writeData(orientation);
}

/*--------------------------------------------------------------------------------------------------
// Name : writeData
// Description : Sends data to display controller.
// Argument(s) : data -> Data to be sent
// Return value : None.
//--------------------------------------------------------------------------------------------------*/
void writeData (uint8_t data)
{
    AO_Write(AO_DATA);
    SPI_WriteTxData(data);  // Send data to display controller.
    while ( ! (SPI_ReadTxStatus() & SPI_STS_SPI_IDLE) );  // Wait until SPI cycle complete.
}

/*--------------------------------------------------------------------------------------------------
// Name : putPixel
// Description : Sends data to display a pixel.
// Argument : color -> color to be sent for pixel
// Return value : None.
//--------------------------------------------------------------------------------------------------*/
void putPixel(uint16_t color)
{
    AO_Write(AO_DATA);
    SPI_WriteTxData(color>>8);  // Send data to display controller.
    while ( ! (SPI_ReadTxStatus() & SPI_STS_SPI_IDLE) ); // Wait until SPI cycle complete.
    SPI_WriteTxData(color);
}

/*--------------------------------------------------------------------------------------------------
// Name : writeCommand
// Description : Sends command to display controller.
// Argument(s) : command -> Command to be sent
// Return value : None.
//--------------------------------------------------------------------------------------------------*/

void writeCommand(uint8_t command)
{
    AO_Write(AO_COMMAND);
    SPI_WriteTxData(command);    // Send command to display controller.  
    while ( ! (SPI_ReadTxStatus() & SPI_STS_SPI_IDLE) );  // Wait until SPI cycle complete.
}

void LcdPlot(uint16_t x, uint16_t y, uint16_t colour)
{
	if ((x < 0) || (x >= LCD_WIDTH) || (y < 0) || (y >= LCD_HEIGHT)) return;
	setMemLcdFrame(x, y, x + 1, y + 1);
	putPixel(colour);
}

void drawCircle(uint16_t xCentre, uint16_t yCentre, uint16_t radius, uint16_t colour) 
{
    int16_t x = 0, y = radius;
    int16_t d = 3 - (2 * radius);
 
    while(x <= y) 
    {
        LcdPlot(xCentre + x, yCentre + y, colour);
        LcdPlot(xCentre + y, yCentre + x, colour);
        LcdPlot(xCentre - x, yCentre + y, colour);
        LcdPlot(xCentre + y, yCentre - x, colour);
        LcdPlot(xCentre - x, yCentre - y, colour);
        LcdPlot(xCentre - y, yCentre - x, colour);
        LcdPlot(xCentre + x, yCentre - y, colour);
        LcdPlot(xCentre - y, yCentre + x, colour);

        if (d < 0)
        	d += (4 * x) + 6;
        else 
        {
            d += (4 * (x - y)) + 10;
            y -= 1;
        }
        x++;
    }
}    
    //draw colour filled rectangle
void drawRectFilled(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t colour) 
{
	if ((x >= LCD_WIDTH) || (y >= LCD_HEIGHT)) return;
	if ((x + w - 1) >= LCD_WIDTH) w = LCD_WIDTH - x;
	if ((y + h - 1) >= LCD_HEIGHT) h = LCD_HEIGHT - y;
	setMemLcdFrame(x, y, x + w - 1, y + h - 1);
	for (y = h; y > 0; y--)
		for (x = w; x > 0; x--)
            putPixel(colour); 
}  

 unsigned char getCharCode(const wchar_t character)
{
    // Latin alphabet
    if ((character>31) & (character<128))
        return character-32;
    
    // Cyrillic alphabet Letter range 1
    if ((character>53390) & (character<53440))
       return character-53301;
  
     // Cyrillic alphabet Letter range 2
    if ((character>53631) & (character<53648))
        return character-53493;
 
    switch (character)
{
    case 'і':
        return 73;
    case 'І':
        return 41;
    case 'є':
        return 152;
    case 'Є':
        return 120;
    case 'ї':
        return 150;
    case 'Ї':
        return 118;
    case 'ґ':
        return 149;
    case 'Ґ':
        return 117;
}
    return 31; //code of "?"
}

void LcdPutChr(wchar_t character, uint8_t x, uint8_t y, uint16_t chrColour, uint16_t bgColour,uint8_t sizeChr)
{
	uint8_t row, column, lb;
	char rd_byte;
	// Plot the font data
    for (column = 0; column < HIGHT_CHAR; column++)
	{   memcpy(&rd_byte, &font_ukr_16x16[getCharCode(character)][column],1);
        lb = column / WIDTH_CHAR;        
    	for (row = 0; row < WIDTH_CHAR; row++)
    	{
			if ((rd_byte) & (1 << (row)))
                drawRectFilled(x+column*sizeChr-(lb*WIDTH_CHAR*sizeChr), y+row*sizeChr+(lb*WIDTH_CHAR*sizeChr), sizeChr, sizeChr, chrColour);
            else 
                if (bgColour != TRANSPARENT)
                    drawRectFilled(x+column*sizeChr-(lb*WIDTH_CHAR*sizeChr), y+row*sizeChr+(lb*WIDTH_CHAR*sizeChr), sizeChr, sizeChr, bgColour);   
         }
	}
}


void LcdClearDisplay(uint16_t colour)
{
	uint16_t pixel;
    
	// Set the column address to 0-127
    setMemLcdFrame(0, 0, LCD_WIDTH, LCD_HEIGHT);
	for(pixel = 0; pixel < (LCD_WIDTH * LCD_HEIGHT); pixel++) 
      {putPixel(colour);}
}

void setMemLcdFrame(int8_t x0, int8_t y0, int8_t x1, int8_t y1)
{
    writeCommand(SET_COLUMN_ADDRESS);
    writeData(0x00); // XSH
    writeData(x0);   // XSL
    writeData(0x00); // XEH
    writeData(x1);   // XEL (pixels x)
   
    writeCommand(SET_PAGE_ADDRESS);
    writeData(0x00); // YSH
    writeData(y0);   // YSL
    writeData(0x00); // YEH
    writeData(y1);   // YEL (pixels y)
    // memory write
    writeCommand(WRITE_MEMORY_START);
}
/*******************************************************************
* Name : LcdInit
* Description :  LCD controller initialization.
* Argument(s) :  orientation - rotate screen at desired orientation
* Return value : None.
********************************************************************/ 
void LcdInit(uint8_t orientation)
{
	LcdReset();

    writeCommand(EXIT_SLEEP_MODE);    
    CyDelay(5); // Wait for the screen to wake up
    writeCommand(SET_PIXEL_FORMAT);
    writeData(0x05); // 16 bits per pixel
 
    
    writeCommand(SET_GAMMA_CURVE);
    writeData(0x04); // Select gamma curve 3
    
    writeCommand(GAM_R_SEL);
    writeData(0x01); // Gamma adjustment enabled
    
    writeCommand(POSITIVE_GAMMA_CORRECT);
    writeData(0x3f); // 1st Parameter
    writeData(0x25); // 2nd Parameter
    writeData(0x1c); // 3rd Parameter
    writeData(0x1e); // 4th Parameter
    writeData(0x20); // 5th Parameter
    writeData(0x12); // 6th Parameter
    writeData(0x2a); // 7th Parameter
    writeData(0x90); // 8th Parameter
    writeData(0x24); // 9th Parameter
    writeData(0x11); // 10th Parameter
    writeData(0x00); // 11th Parameter
    writeData(0x00); // 12th Parameter
    writeData(0x00); // 13th Parameter
    writeData(0x00); // 14th Parameter
    writeData(0x00); // 15th Parameter
     
    writeCommand(NEGATIVE_GAMMA_CORRECT);
    writeData(0x20); // 1st Parameter
    writeData(0x20); // 2nd Parameter
    writeData(0x20); // 3rd Parameter
    writeData(0x20); // 4th Parameter
    writeData(0x05); // 5th Parameter
    writeData(0x00); // 6th Parameter
    writeData(0x15); // 7th Parameter
    writeData(0xa7); // 8th Parameter
    writeData(0x3d); // 9th Parameter
    writeData(0x18); // 10th Parameter
    writeData(0x25); // 11th Parameter
    writeData(0x2a); // 12th Parameter
    writeData(0x2b); // 13th Parameter
    writeData(0x2b); // 14th Parameter
    writeData(0x3a); // 15th Parameter
    
    writeCommand(FRAME_RATE_CONTROL1);
    writeData(0x08); // DIVA = 8
    writeData(0x08); // VPA = 8
    
    writeCommand(DISPLAY_INVERSION);
    writeData(0x07); // NLA = 1, NLB = 1, NLC = 1 (all on Frame Inversion)
   
    writeCommand(POWER_CONTROL1);
    writeData(0x0a); // VRH = 10:  GVDD = 4.30
    writeData(0x02); // VC = 2: VCI1 = 2.65
      
    writeCommand(POWER_CONTROL2);
    writeData(0x02); // BT = 2: AVDD = 2xVCI1, VCL = -1xVCI1, VGH = 5xVCI1, VGL = -2xVCI1

    writeCommand(VCOM_CONTROL1);
    writeData(0x50); // VMH = 80: VCOMH voltage = 4.5
    writeData(0x5b); // VML = 91: VCOML voltage = -0.225
    
    writeCommand(VCOM_OFFSET_CONTROL);
    writeData(0x40); // nVM = 0, VMF = 64: VCOMH output = VMH, VCOML output = VML
    
    setMemLcdFrame(0, 0, LCD_WIDTH, LCD_HEIGHT);
    
    // Select display orientation
    writeCommand(SET_ADDRESS_MODE);
    setLcdOrientation(orientation); 
   
    LcdClearDisplay(BLACK); 
    
    // Set the display to on
    writeCommand(SET_DISPLAY_ON);

}

// Print a string of characters on the LCD
void LcdPutStr(char *string, uint8_t x, uint8_t y, uint16_t chrColour, uint16_t bgColour)
{
	uint8_t start_x = x;
    uint8_t characterNumber;

	for (characterNumber = 0; characterNumber < strlen((char*)(string)); characterNumber++)
	{
		// move to the next line if it's out of bounds
		if (x > 121)
		{
			x = start_x;
			y += 18;
		}
		// If it reaches the bottom of the screen just exit
		if (y > 120) break;

		// Plot the character
		LcdPutChr((wchar_t)(string[characterNumber]), x, y, chrColour, bgColour, SIZE_NORMAL);
		x += 8;
	}
}

/* EOF-----------------------------------------------------------------------------------------------*/