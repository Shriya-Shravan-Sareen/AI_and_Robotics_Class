#include <Servo.h>
Servo myservo;
Servo myservo2; //to create object to control a servo

void setup() {
  // put your setup code here, to run once:
myservo.attach(8);
myservo2.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
myservo.write(50);
myservo2.write(50);
delay(1000);
myservo.write(90);
myservo2.write(90);
delay(1000);
}

