#include <Arduino.h>
#include "rgb.h"

int buttonState;
int buttonPin = 2;
int pinRed = 11;
int pinBlue = 9;
int pinGreen = 10;

void thisColor (unsigned char red, unsigned char green, unsigned char blue) {
    analogWrite(pinRed,red);
    analogWrite(pinBlue,blue);
    analogWrite(pinGreen,green);
}


void init_rgb_button() {
    
    Serial.begin(9600);

    pinMode(buttonPin,INPUT_PULLUP);
    pinMode(pinRed,OUTPUT);
    pinMode(pinBlue,OUTPUT);
    pinMode(pinGreen,OUTPUT);

    
}

void loop_rgb_button() {
    buttonState = digitalRead(buttonPin);
    
    if (buttonState == LOW) {
        thisColor(255,0,0);
        delay(1000);
        thisColor(0,255,0);
        delay(1000);
        thisColor(0,0,255);
        delay(1000);

        delay(200);

    }

}  