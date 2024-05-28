#include <Servo.h>
Servo myservo;
Servo myservo2; 
int trig = 6;
int echo = 5;
void setup() {
  Serial.b
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  // put your setup code here, to run once:
myservo.attach(8);
myservo2.attach(9);
}

void loop() {
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);

  // put your main code here, to run repeatedly:

long time= pulseIn(echo, HIGH);
int dist= (time/2.0)*0.0343;

int angle= map(dist, 0, 500, 0, 180);
  myservo.write(angle);
  myservo2.write(angle);
  delay(10);
}