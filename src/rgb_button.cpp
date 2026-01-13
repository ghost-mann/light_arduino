#include <Arduino.h>
#include "rgb.h"

int buttonState;
int buttonPin = 2;
int pinRed = 11;
int pinBlue = 9;
int pinGreen = 10;


void init_rgb_button() {
    Serial.begin(9600);
}

void loop_rgb_button() {
    if (buttonState == HIGH) {

    }

}  