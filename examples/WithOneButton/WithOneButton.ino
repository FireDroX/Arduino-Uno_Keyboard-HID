#include <KeyboardHID.h>

const int buttonPin = 2;    // Button connected to digital pin 2

void setup() {
  /*************************************************/
  /* Needed for the KeyboardWrite function to work */
  Serial.begin(9600);
  /*************************************************/


  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // Read the state of the button (HIGH or LOW)

  delay(100);

  if(buttonState == LOW) {
    
    KeyboardWrite(LWIN, LSHIFT, _S); // WIN + MAJ + S

    /************************************************/
    /* KeyboardWrite(LCTRL, _Z, null) -> CTRL + Z   */
    /* KeyboardWrite(_H, _E, _Y)      -> HEY        */
    /* KeyboardWrite(K0, K0, K7)      -> 007        */
    /************************************************/
  }
}
