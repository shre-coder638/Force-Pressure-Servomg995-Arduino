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
    myServo.write(10);
    delay(1000);
    myServo.write(90);
    delay(1000);
    myServo.write(120);
    delay(1000);
    myServo.write(180);
    delay(1000);

// write your code here
}