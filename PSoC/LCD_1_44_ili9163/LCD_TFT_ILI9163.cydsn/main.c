/* ========================================
 *
 *  ILI9163 LCD main file
 *  128X128 resolution: square visual area
 *  1.44 inch SPI serial bus
 *
 * ========================================
*/
#include <project.h>
#include "display.h"

int main()
{
    CyGlobalIntEnable; 
    
    //Clk_Start();
    SPI_Start();
    LcdInit(LCD_ORIENTATION_270);

    /* English Alphabet */
    LcdPutStr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 2, 20, YELLOW, BLACK);
    LcdPutStr("abcdefghijklmnopqrstuvwxyz", 2, 80, YELLOW, BLACK);
    CyDelay(2000);
    setLcdOrientation(LCD_ORIENTATION_90);
    drawRectFilled(0,0,128,128,BLUE);
    LcdPutStr("OOPs...", 22, 80, YELLOW, BLUE);
    CyDelay(1000);
    setLcdOrientation(LCD_ORIENTATION_0);
    drawRectFilled(0,0,128,128,BLUE);
    LcdPutStr("Upside Down", 20, 80, YELLOW, BLUE);
    CyDelay(3000);
    setLcdOrientation(LCD_ORIENTATION_270);
    LcdClearDisplay(RED);
    LcdPutChr('R', 20, 20, WHITE, 0, SIZE_NORMAL);
    CyDelay(400);
    LcdPutChr('R', 30, 30, GREEN, 0, SIZE_BIG);
    CyDelay(600);
    LcdPutChr('R', 50, 45, BLUE, 0, SIZE_HUGE);
    CyDelay(2000);

    /*  Figures */
    LcdClearDisplay(BLUE);
    CyDelay(800);
    drawRectFilled(100,100,120,120,GREEN);
    CyDelay(400);
    drawRectFilled(50,70,30,40,RED);
    CyDelay(500);
    drawRectFilled(5,10,38,58,LIGHTGREY);
    CyDelay(500);
    drawRectFilled(40,40,88,108,BLACK);
    CyDelay(400);
    drawRectFilled(10,20,70,40,GREEN);
    CyDelay(300);
    drawRectFilled(50,70,90,120,RED);
    CyDelay(300);
    drawCircle(60, 50, 10, YELLOW);
    CyDelay(200);
    LcdClearDisplay(LIGHTGREY);
    drawCircle(40, 60, 20, MAGENTA);
    CyDelay(300);
    drawCircle(50, 50, 50, RED);
    CyDelay(500);
    drawCircle(10, 10, 4, YELLOW);
    CyDelay(300);
    drawCircle(80, 60, 30, BLUE);    
    CyDelay(1000);
    
    /* Ukrayinska mova */ 
    LcdClearDisplay(BLACK);
    LcdPutChr('Є', 40, 60, RED, TRANSPARENT, SIZE_NORMAL);
    CyDelay(600);
    LcdPutChr('Ї', 60, 80, RED, TRANSPARENT, SIZE_NORMAL);
    CyDelay(600);
    LcdPutChr('Ґ', 80, 100, RED, TRANSPARENT, SIZE_NORMAL);
    CyDelay(800);
    LcdClearDisplay(MAGENTA);  
    LcdPutChr('Ґ', 75, 95, GREEN, TRANSPARENT, SIZE_BIG);
    CyDelay(600);
    LcdPutChr('Ї', 55, 75, GREEN, TRANSPARENT, SIZE_BIG);
    CyDelay(600);
    LcdPutChr('Є', 35, 55, GREEN, TRANSPARENT, SIZE_BIG);
    CyDelay(1000);
    
    drawRectFilled(0,0,128,63,RED);
    drawRectFilled(0,63,128,128,BLACK);
    
    LcdPutChr('н', 2, 10, YELLOW, 0, SIZE_NORMAL);
    LcdPutChr('а', 10, 10, YELLOW, 0, SIZE_NORMAL);
    LcdPutChr('ш', 20, 10, YELLOW, 0, SIZE_NORMAL);
    LcdPutChr('а', 30, 10, YELLOW, 0, SIZE_NORMAL); 
    
    LcdPutChr('М', 25, 30, BLUE, 0, SIZE_BIG);
    LcdPutChr('О', 45, 30, BLUE, 0, SIZE_BIG);
    LcdPutChr('В', 65, 30, BLUE, 0, SIZE_BIG);
    LcdPutChr('А', 85, 30, BLUE, 0, SIZE_BIG);

    
    LcdPutChr('С', 10, 80, RED, TRANSPARENT,1);
    LcdPutChr('О', 20, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('Л', 30, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('О', 40, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('В', 50, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('`', 60, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('Ї', 67, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('Н', 77, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('А', 87, 80, RED, 0, SIZE_NORMAL);
    LcdPutChr('!', 95, 80, RED, 0, SIZE_NORMAL);

    LcdPutChr('і', 10, 110, GREEN, TRANSPARENT, SIZE_NORMAL);
    LcdPutChr('є', 40, 110, MAGENTA, TRANSPARENT, SIZE_NORMAL);
    LcdPutChr('ї', 70, 110, YELLOW, TRANSPARENT, SIZE_NORMAL);
    LcdPutChr('ґ', 100, 110, WHITE, TRANSPARENT, SIZE_NORMAL);

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
