#include <Arduino.h>
#include "rgb.h"

 int redPin = 11;
 int bluePin = 9;
 int greenPin = 10;

 void color (unsigned char red, unsigned char green, unsigned char blue) {
    analogWrite(redPin,red);
    analogWrite(bluePin,blue);
    analogWrite(greenPin,green);
}
 

void init_rgb() {
    pinMode(redPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
    pinMode(greenPin,OUTPUT);
}

void loop_rgb() {
    color(255,0,0);
    delay(5000);
    color(0,255,0);
    delay(5000);
    color(0,0,255);
    delay(5000);

}

