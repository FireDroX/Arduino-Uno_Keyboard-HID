/*
    KeyboardHID.h - Library to use Arduino UNO as a keyboard
    With "Arduino-keyboard-0.3.hex" firmware (use Flip 3.4)
*/
#ifndef KeyboardHID_h
#define KeyboardHID_h

#define ESC 41
#define TAB 43
#define CAPS 57
#define LSHIFT 225
#define LCTRL 224
#define LWIN 227
#define LALT 226
#define SPACE 44
#define RALT 230
#define RWIN 231
#define MENU 118
#define RCTRL 228
#define RSHIFT 229
#define Enter 40
#define Backspace 42

#define F1 58
#define F2 59
#define F3 60
#define F4 61
#define F5 62
#define F6 63
#define F7 64
#define F8 65
#define F9 66
#define F10 67
#define F11 68
#define F12 69

#define PRSC 70
#define SCLK 71
#define PAUS 72
#define INS 73
#define Home 74
#define pgUp 75
#define Del 76
#define END 77
#define pgDN 78

#define up 82
#define left 80
#define down 81
#define right 79

#define K0 98
#define K1 89
#define K2 90
#define K3 91
#define K4 92
#define K5 93
#define K6 94
#define K7 95
#define K8 96
#define K9 97
#define dot 99
#define KPEN 88
#define NMLK 83
#define DIVIDE 84
#define MULTI 85
#define MINUS 86
#define ADD 87

#define SMALL2 53
#define AND 30
#define ET 31
#define QUOTE 32
#define SMALLQUOTE 33
#define OPARENTHESIS 34
#define MINUS2 35
#define ET2 36
#define UNDERSCORE 37
#define CEDILLA 38
#define AACCENT 39
#define CPARENTHESIS 45
#define EQUAL 46
#define CIRCUMFLEX 47
#define DOLAR 48
#define UACCENT 52
#define MULTI2 49
#define EXCMA 56
#define X2POINT 55
#define X1POINT 54
#define COMA 16

#define _A 20
#define _Z 26
#define _E 8
#define _R 21
#define _T 23
#define _Y 28
#define _U 24
#define _I 12
#define _O 18
#define _P 19
#define _Q 4
#define _S 22
#define _D 7
#define _F 9
#define _G 10
#define _H 11
#define _J 13
#define _K 14
#define _L 15
#define _M 51
#define _W 29
#define _X 27
#define _C 6
#define _V 25
#define _B 17

#define null 0

void KeyboardWrite(int key1, int key2, int key3);

#endif // KeyboardHID_h
