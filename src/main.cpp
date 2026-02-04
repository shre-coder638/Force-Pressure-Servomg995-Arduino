#include <Arduino.h>
#include <Servo.h>
Servo myServo;

void setup() {
    Serial.begin(9600);
    myServo.attach(11);
    Serial.println("Servo initiate");
// write your initialization code here
}

void loop() {
// write your code here
}