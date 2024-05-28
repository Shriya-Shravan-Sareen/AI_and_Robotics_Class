int red = 4;
int yellow = 2;
int blue = 3;
int green = 6;
int white = 5;

#include <DHT11.h>
DHT11 dht11(13);

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
pinMode(white, OUTPUT);

Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A0);
Serial.print(val);
Serial.print(" , ");

if (val <= 100) {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
}
else if (100 < val && val <= 200) {
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
}

else if (200< val && val <= 400) {
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
}

else if (400< val && val <= 600) {
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
}

else if (600< val && val <= 1023) {
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
}
int humidity= dht11.readHumidity();
int temperature= dht11.readTemperature();
Serial.print(humidity);
Serial.print(" , ");
Serial.println(temperature);
delay (60000);
}
