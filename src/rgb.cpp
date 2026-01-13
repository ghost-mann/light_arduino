#include <Arduino.h>
#include "rgb.h"

 int redPin = 11;
 int bluePin = 9;
 int greenPin = 10;
 int dataByte = 0;

 void color (unsigned char red, unsigned char green, unsigned char blue) {
    analogWrite(redPin,red);
    analogWrite(bluePin,blue);
    analogWrite(greenPin,green);
}
 

void init_rgb() {
    pinMode(redPin,OUTPUT);
    pinMode(bluePin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    Serial.begin(9600);
}

void loop_rgb() {
    if (Serial.available() > 0 ) {
        dataByte = Serial.read();

        color(255,0,0);
        delay(1000);
        color(0,255,0);
        delay(1000);
        color(0,0,255);
        delay(1000);
    } else {
        color(237,109,0);
        delay(1000);        
    }
    Serial.print("I received:");
    Serial.println(dataByte);


}

