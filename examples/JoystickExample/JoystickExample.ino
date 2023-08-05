/*************************************************/
/*                                               */
/* This is more a showcase of how the library    */
/* can be used. Here the Arduino UNO with the    */
/* joystick, act as a second game controller for */
/* Assetto Corsa or anything else.               */
/*                                               */
/*************************************************/ 
// ┌──────────────────┬───────────────┬───────────┐
// │    Functions     │   Joystick    │   Keys    │
// ├──────────────────┼───────────────┼───────────┤
// │    Handbreak     │      Up       │    _J     │
// │  Right blinker   │     Right     │    _C     │
// │   Left blinker   │     Left      │    _X     │
// │     Warning      │     Down      │    _V     │
// │   Next Spotify   │ Click + Right │ RALT + K6 │
// │ Previous Spotify │ Click + Left  │ RALT + K5 │
// │   Play / Pause   │ Click + Down  │ RALT + K4 │
// └──────────────────┴───────────────┴───────────┘
/*************************************************/
/*                                               */
/* The 3 last functions are basically calling    */
/* an AutoHotkey macro that make possible the    */
/* controlling part of Spotify possible          */
/*                                               */
/*************************************************/ 

/**
          x > 700
             |
  y < 100 -- o -- y  > 700
		         |
          x < 100
**/

#include <KeyboardHID.h>

#define VRX_PIN  A0 // Arduino pin connected to VRX pin
#define VRY_PIN  A1 // Arduino pin connected to VRY pin

#define BTN_PIN 2 // Arduino pin connected to the button

int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis

int dataButton = LOW;

void setup() {
  Serial.begin(9600);

  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  // read analog X and Y analog values
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

  dataButton = digitalRead(BTN_PIN);

  delay(50);

  // Left blinker
  if(xValue >= 0 && xValue <= 750 && yValue < 100 && dataButton == HIGH) KeyboardWrite(_X, null, null);

  // Right blinker
  if(xValue >= 0 && xValue <= 750 && yValue > 700 && dataButton == HIGH) KeyboardWrite(_C, null, null);

  // Warning
  if(yValue >= 0 && yValue <= 750 && xValue < 100 && dataButton == HIGH) KeyboardWrite(_V, null, null);

  // Handbreak
  if(yValue >= 0 && yValue <= 750 && xValue > 700 && dataButton == HIGH) KeyboardWrite(_J, null, null);

  // Previous Spotify
  if(xValue >= 0 && xValue <= 750 && yValue < 100 && dataButton == LOW) { KeyboardWrite(RALT, K5, null); delay(200); }

  // Next Spotify
  if(xValue >= 0 && xValue <= 750 && yValue > 700 && dataButton == LOW) { KeyboardWrite(RALT, K6, null); delay(200); }

  // Play / Pause
  if(yValue >= 0 && yValue <= 750 && xValue < 100 && dataButton == LOW) { KeyboardWrite(RALT, K4, null); delay(200); }
}
