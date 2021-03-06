/****************************************************************************
* Character generator
* This table defines the standard ASCII characters in a 9x8 dot format
* The characters based on Verdana System Font
****************************************************************************
* FileName: glcd_verdana_ukr_font.h
* GLCD FontName : verdana_ukr9x8
* GLCD FontSize : 9 x 8
* Author: VHOY
****************************************************************************/

static const char verdana_ukr9x8[191][9] =
{ //		        	Symbol Coding: West										    #     UNICODE  #     SYMBOL 
{	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  0 	char code: 32		
{	0x00,	0x00,	0x5F,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  1	char code: 33		!
{	0x00,	0x03,	0x00,	0x03,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  2	char code: 34		"
{	0x00,	0x14,	0x3E,	0x14,	0x3E,	0x14,	0x00,	0x00,	0x00	},	//  3	char code: 35		#
{	0x00,	0x44,	0x4A,	0xFF,	0x52,	0x22,	0x00,	0x00,	0x00	},	//  4	char code: 36		$
{	0x00,	0x06,	0x09,	0x49,	0x36,	0x08,	0x36,	0x49,	0x48	},	//  5	char code: 37		%
{	0x00,	0x36,	0x49,	0x49,	0x56,	0x20,	0x58,	0x00,	0x00	},	//  6	char code: 38		&
{	0x00,	0x03,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  7	char code: 39		' 
{	0x00,	0x7E,	0x81,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  8	char code: 40		(
{	0x00,	0x81,	0x7E,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  9	char code: 41		)
{	0x00,	0x08,	0x04,	0x3E,	0x04,	0x08,	0x00,	0x00,	0x00	},	//  10	char code: 42		*
{	0x00,	0x08,	0x08,	0x3E,	0x08,	0x08,	0x00,	0x00,	0x00	},	//  11	char code: 43		+
{	0x80,	0x60,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  12	char code: 44		,
{	0x00,	0x08,	0x08,	0x08,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  13	char code: 45		-
{	0x00,	0x60,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  14	char code: 46		.
{	0xC0,	0x38,	0x06,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  15	char code: 47		/
{	0x00,	0x3E,	0x41,	0x41,	0x41,	0x3E,	0x00,	0x00,	0x00	},	//  16	char code: 48		0
{	0x00,	0x00,	0x42,	0x7F,	0x40,	0x00,	0x00,	0x00,	0x00	},	//  17	char code: 49		1
{	0x00,	0x42,	0x61,	0x51,	0x49,	0x46,	0x00,	0x00,	0x00	},	//  18	char code: 50		2
{	0x00,	0x22,	0x41,	0x49,	0x49,	0x36,	0x00,	0x00,	0x00	},	//  19	char code: 51		3
{	0x00,	0x18,	0x14,	0x12,	0x7F,	0x10,	0x00,	0x00,	0x00	},	//  20	char code: 52		4
{	0x00,	0x27,	0x45,	0x45,	0x45,	0x39,	0x00,	0x00,	0x00	},	//  21	char code: 53		5
{	0x00,	0x3C,	0x4A,	0x49,	0x49,	0x30,	0x00,	0x00,	0x00	},	//  22	char code: 54		6
{	0x00,	0x01,	0x01,	0x71,	0x0D,	0x03,	0x00,	0x00,	0x00	},	//  23	char code: 55		7
{	0x00,	0x36,	0x49,	0x49,	0x49,	0x36,	0x00,	0x00,	0x00	},	//  24	char code: 56		8
{	0x00,	0x06,	0x49,	0x49,	0x29,	0x1E,	0x00,	0x00,	0x00	},	//  25	char code: 57		9
{	0x00,	0x6C,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  26	char code: 58		:
{	0x80,	0x6C,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  27	char code: 59		;
{	0x00,	0x08,	0x08,	0x14,	0x14,	0x22,	0x00,	0x00,	0x00	},	//  28	char code: 60		<
{	0x00,	0x14,	0x14,	0x14,	0x14,	0x14,	0x00,	0x00,	0x00	},	//  29	char code: 61		=
{	0x00,	0x22,	0x14,	0x14,	0x08,	0x08,	0x00,	0x00,	0x00	},	//  30	char code: 62		>
{	0x00,	0x01,	0x51,	0x09,	0x06,	0x00,	0x00,	0x00,	0x00	},	//  31	char code: 63		?
{	0x00,	0x3C,	0x42,	0x99,	0xA5,	0xA5,	0x9D,	0xA1,	0x1E	},	//  32	char code: 64		@
{	0x00,	0x70,	0x1C,	0x13,	0x13,	0x1C,	0x70,	0x00,	0x00	},	//  33	char code: 65		A
{	0x00,	0x7F,	0x49,	0x49,	0x4E,	0x30,	0x00,	0x00,	0x00	},	//  34	char code: 66		B
{	0x00,	0x1C,	0x22,	0x41,	0x41,	0x41,	0x22,	0x00,	0x00	},	//  35	char code: 67		C
{	0x00,	0x7F,	0x41,	0x41,	0x41,	0x22,	0x1C,	0x00,	0x00	},	//  36	char code: 68		D
{	0x00,	0x7F,	0x49,	0x49,	0x49,	0x41,	0x00,	0x00,	0x00	},	//  37	char code: 69		E
{	0x00,	0x7F,	0x09,	0x09,	0x09,	0x01,	0x00,	0x00,	0x00	},	//  38	char code: 70		F
{	0x00,	0x1C,	0x22,	0x41,	0x49,	0x49,	0x3A,	0x00,	0x00	},	//  39	char code: 71		G
{	0x00,	0x7F,	0x08,	0x08,	0x08,	0x08,	0x7F,	0x00,	0x00	},	//  40	char code: 72		H
{	0x00,	0x41,	0x7F,	0x41,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  41	char code: 73		I
{	0x40,	0x40,	0x41,	0x3F,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  42	char code: 74		J
{	0x00,	0x7F,	0x08,	0x14,	0x22,	0x41,	0x00,	0x00,	0x00	},	//  43	char code: 75		K
{	0x00,	0x7F,	0x40,	0x40,	0x40,	0x40,	0x00,	0x00,	0x00	},	//  44	char code: 76		L
{	0x00,	0x7F,	0x03,	0x0C,	0x30,	0x0C,	0x03,	0x7F,	0x00	},	//  45	char code: 77		M
{	0x00,	0x7F,	0x02,	0x04,	0x08,	0x10,	0x7F,	0x00,	0x00	},	//  46	char code: 78		N
{	0x00,	0x1C,	0x22,	0x41,	0x41,	0x41,	0x22,	0x1C,	0x00	},	//  47	char code: 79		O
{	0x00,	0x7F,	0x11,	0x11,	0x11,	0x0E,	0x00,	0x00,	0x00	},	//  48	char code: 80		P
{	0x00,	0x1C,	0x22,	0x41,	0x41,	0xC1,	0x22,	0x1C,	0x00	},	//  49	char code: 81		Q
{	0x00,	0x7F,	0x09,	0x19,	0x29,	0x46,	0x00,	0x00,	0x00	},	//  50	char code: 82		R
{	0x00,	0x26,	0x49,	0x49,	0x49,	0x32,	0x00,	0x00,	0x00	},	//  51	char code: 83		S
{	0x01,	0x01,	0x01,	0x7F,	0x01,	0x01,	0x01,	0x00,	0x00	},	//  52	char code: 84		T
{	0x00,	0x3F,	0x40,	0x40,	0x40,	0x40,	0x3F,	0x00,	0x00	},	//  53	char code: 85		U
{	0x00,	0x07,	0x18,	0x60,	0x60,	0x18,	0x07,	0x00,	0x00	},	//  54	char code: 86		V
{	0x00,	0x1F,	0x60,	0x18,	0x06,	0x18,	0x60,	0x1F,	0x00	},	//  55	char code: 87		W
{	0x00,	0x63,	0x14,	0x08,	0x14,	0x63,	0x00,	0x00,	0x00	},	//  56	char code: 88		X
{	0x00,	0x03,	0x0C,	0x70,	0x0C,	0x03,	0x00,	0x00,	0x00	},	//  57	char code: 89		Y
{	0x00,	0x61,	0x51,	0x49,	0x45,	0x43,	0x00,	0x00,	0x00	},	//  58	char code: 90		Z
{	0x00,	0xFF,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  59	char code: 91		[
{	0x01,	0x0E,	0x30,	0xC0,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  60	char code: 92		BackSlash
{	0x00,	0x00,	0xFF,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  61	char code: 93		]
{	0x00,	0x04,	0x02,	0x01,	0x02,	0x04,	0x00,	0x00,	0x00	},	//  62	char code: 94		^
{	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  63	char code: 95		_
{	0x00,	0x0B,	0x07,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  64	char code: 96	  ` Apostrophe
{	0x00,	0x20,	0x54,	0x54,	0x78,	0x00,	0x00,	0x00,	0x00	},	//  65	char code: 97		a
{	0x00,	0x7F,	0x44,	0x44,	0x38,	0x00,	0x00,	0x00,	0x00	},	//  66	char code: 98		b
{	0x00,	0x38,	0x44,	0x44,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  67	char code: 99		c
{	0x00,	0x38,	0x44,	0x44,	0x7F,	0x00,	0x00,	0x00,	0x00	},	//  68	char code: 100		d
{	0x00,	0x38,	0x54,	0x54,	0x58,	0x00,	0x00,	0x00,	0x00	},	//  69	char code: 101		e
{	0x00,   0x00,   0x08,   0x7E,   0x09,   0x02,   0x00,   0x00,   0x00	},	//  70	char code: 102		f
{	0x00,	0x38,	0x44,	0x44,	0xFC,	0x00,	0x00,	0x00,	0x00	},	//  71	char code: 103		g
{	0x00,	0x7F,	0x04,	0x04,	0x78,	0x00,	0x00,	0x00,	0x00	},	//  72	char code: 104		h
{	0x00,	0x00,   0x7D,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  73	char code: 105		i
{	0x00,   0x80,   0x84,   0x7D,   0x00,   0x00,   0x00,   0x00,   0x00	},	//  74	char code: 106		j
{	0x00,	0x7F,	0x10,	0x28,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  75	char code: 107		k
{	0x00,	0x7F,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  76	char code: 108		l
{	0x00,	0x7C,	0x04,	0x04,	0x78,	0x04,	0x04,	0x78,	0x00	},	//  77	char code: 109		m
{	0x00,	0x7C,	0x04,	0x04,	0x78,	0x00,	0x00,	0x00,	0x00	},	//  78	char code: 110		n
{	0x00,	0x38,	0x44,	0x44,	0x38,	0x00,	0x00,	0x00,	0x00	},	//  79	char code: 111		o
{	0x00,	0xFC,	0x44,	0x44,	0x38,	0x00,	0x00,	0x00,	0x00	},	//  80	char code: 112		p
{	0x00,	0x38,	0x44,	0x44,	0xFC,	0x00,	0x00,	0x00,	0x00	},	//  81	char code: 113		q
{	0x00,	0x7C,	0x08,	0x04,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  82	char code: 114		r
{	0x00,	0x48,	0x54,	0x54,	0x24,	0x00,	0x00,	0x00,	0x00	},	//  83	char code: 115		s
{	0x00,	0x04,	0x3E,	0x44,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  84	char code: 116		t
{	0x00,	0x3C,	0x40,	0x40,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  85	char code: 117		u
{	0x00,	0x1C,	0x60,	0x60,	0x1C,	0x00,	0x00,	0x00,	0x00	},	//  86	char code: 118		v
{	0x00,	0x1C,	0x60,	0x18,	0x60,	0x1C,	0x00,	0x00,	0x00	},	//  87	char code: 119		w
{	0x00,	0x6C,	0x10,	0x10,	0x6C,	0x00,	0x00,	0x00,	0x00	},	//  88	char code: 120		x
{	0x00,	0x1C,	0xA0,	0x60,	0x1C,	0x00,	0x00,	0x00,	0x00	},	//  89	char code: 121		y
{	0x00,	0x64,	0x54,	0x4C,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  90	char code: 122		z
{	0x10,	0x10,	0xEF,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  91	char code: 123		{
{	0x00,	0x00,	0xFF,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  92	char code: 124		|
{	0x00,	0x00,	0x00,	0xEF,	0x10,	0x10,	0x00,	0x00,	0x00	},	//  93	char code: 125		}
{	0x00,	0x10,	0x08,	0x08,	0x10,	0x10,	0x08,	0x00,	0x00	},	//  94	char code: 126		~
{	0x00,	0x7F,	0x7F,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  95	char code: 127		

  //		        	Symbol Coding: Cyrillic
{	0x00,	0x1C,	0x2A,	0x49,	0x49,	0x49,	0x41,	0x00,	0x00	},	//  96 	char code: 1028		�
{	0x30,	0x78,	0xFC,	0x30,	0x30,	0x30,	0x30,	0x3E,	0x1E	},	//  97	char code: 1029		���
{	0x00,	0x44,	0x7D,	0x44,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  98	char code: 1030		�
{	0x00,	0x45,	0x7C,	0x45,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  99	char code: 1031		�
{	0x18,	0x3C,	0x66,	0x5A,	0x18,	0x18,	0x18,	0x18,	0x18	},	//  100	char code: 1032		-->
{	0x18,	0x18,	0x18,	0x18,	0x18,	0x5A,	0x66,	0x3C,	0x18	},	//  101	char code: 1033		<--
{	0x00,	0x0C,	0x06,	0xFB,	0xFB,	0x06,	0x0C,	0x00,	0x00	},	//  102	char code: 1034		�����
{	0x00,	0x30,	0x60,	0xDF,	0xDF,	0x60,	0x30,	0x00,	0x00	},	//  103	char code: 1035		����
{	0x06,	0x09,	0x06,	0x00,	0x3E,	0x41,	0x41,	0x22,	0x00	},	//  104	char code: 1036		��
{	0x00,	0x00,	0x44,	0x44,	0x5F,	0x44,	0x44,	0x00,	0x00	},	//  105	char code: 1037		�
{	0x00,	0x10,	0x08,	0x08,	0x10,	0x10,	0x08,	0x00,	0x00	},	//  106	char code: 1038		~
{	0x02,	0x1F,	0x20,	0x24,	0xFE,	0x24,	0x20,	0x1F,	0x02	},	//  107	char code: 1039		������
{	0x00,	0x70,	0x1C,	0x13,	0x13,	0x1C,	0x70,	0x00,	0x00	},	//  108	char code: 1040		�
{	0x00,	0x7F,	0x49,	0x49,	0x49,	0x30,	0x00,	0x00,	0x00	},	//  109	char code: 1041		�
{	0x00,	0x7F,	0x49,	0x49,	0x4E,	0x30,	0x00,	0x00,	0x00	},	//  110	char code: 1042		�
{	0x00,	0x7F,	0x01,	0x01,	0x01,	0x03,	0x00,	0x00,	0x00	},	//  111	char code: 1043		�
{	0x00,	0xC0,	0x70,	0x4F,	0x41,	0x41,	0x7F,	0xC0,	0x00	},	//  112	char code: 1044		�
{	0x00,	0x7F,	0x49,	0x49,	0x49,	0x41,	0x00,	0x00,	0x00	},	//  113	char code: 1045		�
{	0x41,	0x21,	0x16,	0x08,	0x7F,	0x08,	0x16,	0x21,	0x41	},	//  114	char code: 1046		�
{	0x00,	0x41,	0x49,	0x49,	0x49,	0x36,	0x00,	0x00,	0x00	},	//  115	char code: 1047		�
{	0x00,	0x7F,	0x20,	0x10,	0x0C,	0x02,	0x7F,	0x00,	0x00	},	//  116	char code: 1048		�
{	0x00,	0x7E,	0x20,	0x11,	0x09,	0x04,	0x7E,	0x00,	0x00	},	//  117	char code: 1049		�
{	0x00,	0x7F,	0x08,	0x14,	0x22,	0x41,	0x00,	0x00,	0x00	},	//  118	char code: 1050		�
{	0x00,	0x40,	0x40,	0x3F,	0x01,	0x01,	0x7F,	0x00,	0x00	},	//  119	char code: 1051		�
{	0x00,	0x7F,	0x03,	0x0C,	0x30,	0x0C,	0x03,	0x7F,	0x00	},	//  120	char code: 1052		�
{	0x00,	0x7F,	0x08,	0x08,	0x08,	0x08,	0x7F,	0x00,	0x00	},	//  121	char code: 1053		�
{	0x00,	0x1C,	0x22,	0x41,	0x41,	0x41,	0x22,	0x1C,	0x00	},	//  122	char code: 1054		�
{	0x00,	0x7F,	0x01,	0x01,	0x01,	0x01,	0x7F,	0x00,	0x00	},	//  123	char code: 1055		�
{	0x00,	0x7F,	0x11,	0x11,	0x11,	0x0E,	0x00,	0x00,	0x00	},	//  124	char code: 1056		�
{	0x00,	0x1C,	0x22,	0x41,	0x41,	0x41,	0x22,	0x00,	0x00	},	//  125	char code: 1057		�
{	0x00,	0x03,	0x01,	0x01,	0x7F,	0x01,	0x01,	0x03,	0x00	},	//  126	char code: 1058		�
{	0x00,	0x43,	0x4C,	0x30,	0x0C,	0x03,	0x00,	0x00,	0x00	},	//  127	char code: 1059		�
{	0x00,	0x1C,	0x22,	0x22,	0x7F,	0x22,	0x22,	0x1C,	0x00	},	//  128	char code: 1060		�
{	0x00,	0x63,	0x14,	0x08,	0x14,	0x63,	0x00,	0x00,	0x00	},	//  129	char code: 1061		�
{	0x00,	0x7F,	0x40,	0x40,	0x40,	0x7F,	0xC0,	0x00,	0x00	},	//  130	char code: 1062		�
{	0x00,	0x07,	0x08,	0x08,	0x08,	0x7F,	0x00,	0x00,	0x00	},	//  131	char code: 1063		�
{	0x00,	0x7F,	0x40,	0x40,	0x7F,	0x40,	0x40,	0x7F,	0x00	},	//  132	char code: 1064		�
{	0x00,	0x7F,	0x40,	0x40,	0x7F,	0x40,	0x40,	0x7F,	0xC0	},	//  133	char code: 1065		�
{	0x01,	0x01,	0x7F,	0x48,	0x48,	0x48,	0x30,	0x00,	0x00	},	//  134	char code: 1066		�
{	0x00,	0x7F,	0x48,	0x48,	0x48,	0x30,	0x00,	0x7F,	0x00	},	//  135	char code: 1067		�
{	0x00,	0x7F,	0x48,	0x48,	0x48,	0x30,	0x00,	0x00,	0x00	},	//  136	char code: 1068		�
{	0x00,	0x41,	0x49,	0x49,	0x49,	0x2A,	0x1C,	0x00,	0x00	},	//  137	char code: 1069		�
{	0x00,	0x7F,	0x08,	0x3E,	0x41,	0x41,	0x41,	0x3E,	0x00	},	//  138	char code: 1070		�
{	0x00,	0x40,	0x26,	0x19,	0x09,	0x09,	0x7F,	0x00,	0x00	},	//  139	char code: 1071		�
{	0x00,	0x20,	0x54,	0x54,	0x78,	0x00,	0x00,	0x00,	0x00	},	//  140	char code: 1072		�
{	0x00,	0x3C,	0x56,	0x50,	0x20,	0x00,	0x00,	0x00,	0x00	},	//  141	char code: 1073		�
{	0x00,	0x7C,	0x54,	0x54,	0x28,	0x00,	0x00,	0x00,	0x00	},	//  142	char code: 1074		�
{	0x00,	0x7C,	0x04,	0x04,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  143	char code: 1075		�
{	0x00,	0xC0,	0x60,	0x5C,	0x44,	0x7C,	0xC0,	0x00,	0x00	},	//  144	char code: 1076		�
{	0x00,	0x38,	0x54,	0x54,	0x58,	0x00,	0x00,	0x00,	0x00	},	//  145	char code: 1077		�
{	0x00,	0x44,	0x28,	0x10,	0x7C,	0x10,	0x28,	0x44,	0x00	},	//  146	char code: 1078		�
{	0x00,	0x44,	0x54,	0x54,	0x6C,	0x00,	0x00,	0x00,	0x00	},	//  147	char code: 1079		�
{	0x00,	0x7C,	0x10,	0x08,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  148	char code: 1080		�
{	0x00,	0x7C,	0x11,	0x09,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  149	char code: 1081		�
{	0x00,	0x7C,	0x10,	0x2C,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  150	char code: 1082		�
{	0x00,	0x40,	0x3C,	0x04,	0x04,	0x7C,	0x00,	0x00,	0x00	},	//  151	char code: 1083		�
{	0x00,	0x7C,	0x08,	0x30,	0x08,	0x7C,	0x00,	0x00,	0x00	},	//  152	char code: 1084		�
{	0x00,	0x7C,	0x10,	0x10,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  153	char code: 1085		�
{	0x00,	0x38,	0x44,	0x44,	0x38,	0x00,	0x00,	0x00,	0x00	},	//  154	char code: 1086		�
{	0x00,	0x7C,	0x04,	0x04,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  155	char code: 1087		�
{	0x00,	0xFC,	0x24,	0x24,	0x18,	0x00,	0x00,	0x00,	0x00	},	//  156	char code: 1088		�
{	0x00,	0x38,	0x44,	0x44,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  157	char code: 1089		�
{	0x00,	0x04,	0x04,	0x7C,	0x04,	0x04,	0x00,	0x00,	0x00	},	//  158	char code: 1090		�
{	0x00,	0x1C,	0xA0,	0x60,	0x1C,	0x00,	0x00,	0x00,	0x00	},	//  159	char code: 1091		�
{	0x00,	0x18,	0x24,	0x24,	0xFE,	0x24,	0x24,	0x18,	0x00	},	//  160	char code: 1092		�
{	0x00,	0x6C,	0x10,	0x10,	0x6C,	0x00,	0x00,	0x00,	0x00	},	//  161	char code: 1093		�
{	0x00,	0x7C,	0x40,	0x40,	0x7C,	0xC0,	0x00,	0x00,	0x00	},	//  162	char code: 1094		�
{	0x00,	0x0C,	0x10,	0x10,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  163	char code: 1095		�
{	0x00,	0x7C,	0x40,	0x40,	0x7C,	0x40,	0x40,	0x7C,	0x00	},	//  164	char code: 1096		�
{	0x00,	0x7C,	0x40,	0x40,	0x7C,	0x40,	0x40,	0x7C,	0xC0	},	//  165	char code: 1097		�
{	0x04,	0x04,	0x7C,	0x50,	0x50,	0x20,	0x00,	0x00,	0x00	},	//  166	char code: 1098		�
{	0x00,	0x7C,	0x50,	0x50,	0x20,	0x00,	0x7C,	0x00,	0x00	},	//  167	char code: 1099		�
{	0x00,	0x7C,	0x50,	0x50,	0x20,	0x00,	0x00,	0x00,	0x00	},	//  168	char code: 1100		�
{	0x00,	0x44,	0x54,	0x54,	0x38,	0x00,	0x00,	0x00,	0x00	},	//  169	char code: 1101		�
{	0x00,	0x7C,	0x10,	0x38,	0x44,	0x44,	0x38,	0x00,	0x00	},	//  170	char code: 1102		�
{	0x00,	0x48,	0x34,	0x14,	0x7C,	0x00,	0x00,	0x00,	0x00	},	//  171	char code: 1103		�
{	0x00,	0x7F,	0x41,	0x41,	0x41,	0x41,	0x41,	0x7F,	0x00	},	//  172	char code: 1104		������
{	0x80,	0x40,	0x3C,	0x52,	0x5A,	0x4A,	0x3C,	0x02,	0x01	},	//  173	char code: 1105		������
{	0x00,	0x3C,	0x42,	0x81,	0x81,	0x81,	0x81,	0x42,	0x3C	},	//  174	char code: 1106		������
{	0x00,	0x3C,	0x42,	0x81,	0x99,	0x99,	0x81,	0x42,	0x3C	},	//  175	char code: 1107		������
{	0x00,	0x38,	0x54,	0x54,	0x44,	0x00,	0x00,	0x00,	0x00	},	//  176	char code: 1108		������
{	0x00,	0x3C,	0x42,	0xA5,	0x99,	0x99,	0xA5,	0x42,	0x3C	},	//  177	char code: 1109		������
{	0x00,	0x7A,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  178	char code: 1110		�
{	0x00,	0x02,	0x78,	0x02,	0x00,	0x00,	0x00,	0x00,	0x00	},	//  179	char code: 1111		�
{	0x20,	0x30,	0x28,	0x24,	0x22,	0x24,	0x28,	0x30,	0x20	},	//  180	char code: 1112		������
{	0x20,	0x30,	0x38,	0x3C,	0x3E,	0x3C,	0x38,	0x30,	0x20	},	//  181	char code: 1113		������
{	0x00,	0x08,	0x14,	0x36,	0x41,	0x36,	0x14,	0x08,	0x00	},	//  182	char code: 1114		������
{	0x00,	0x92,	0x54,	0x38,	0xEE,	0x38,	0x54,	0x92,	0x00	},	//  183	char code: 1115		������
{	0x48,	0x2C,	0x1A,	0x09,	0x00,	0x48,	0x2C,	0x1A,	0x09	},	//  184	char code: 1116		������
{	0x00,	0x00,	0x88,	0x4C,	0x2A,	0x19,	0x08,	0x00,	0x00	},	//  185	char code: 1117		������
{	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF	},	//  186	char code: 1118		������
{	0x81,	0xC3,	0x66,	0x3C,	0x18,	0x3C,	0x66,	0xC3,	0x81	},	//  187	char code: 1119		������
{	0x00,	0x3C,	0x18,	0x42,	0x66,	0x42,	0x18,	0x3C,	0x00	},	//  188	char code: 1120		������
{	0x00,	0x7E,	0x02,	0x02,	0x03,	0x00,	0x00,	0x00,	0x00	},	//  189	char code: 1168		�
{	0x00,	0x7C,	0x04,	0x06,	0x00,	0x00,	0x00,	0x00,	0x00	}	//  190	char code: 1169		�
};