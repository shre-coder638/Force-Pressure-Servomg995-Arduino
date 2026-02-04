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
    for (int i =0; i <= 180; i += 10) {
        myServo.write(i);
        Serial.print("Servo Angle: ");
        Serial.println(i);
        delay(500);
    }
    for (int i =180; i >= 0; i -= 10) {
        myServo.write(i);
        Serial.print("Servo Angle: ");
        Serial.println(i);
        delay(500);
    }

// write your code here
}