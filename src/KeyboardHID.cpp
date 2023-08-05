#include "Arduino.h"
#include "KeyboardHID.h"

void KeyboardWrite(int key1, int key2, int key3) {
    uint8_t buff[8] = { 0 };

    buff[2] = key1;
    buff[3] = key2;
    buff[4] = key3;
    Serial.write(buff, 8);
    buff[2] = 0;
    buff[3] = 0;
    buff[4] = 0;
    Serial.write(buff, 8);
}