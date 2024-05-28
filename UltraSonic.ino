void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(8, INPUT);
pinMode(9, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, LOW);
delay(10);
digitalWrite(9, HIGH);
delay(2);
digitalWrite(9, LOW);

long time= pulseIn(8, HIGH);
float dist= (time/2.0)*0.000343;

Serial.println(dist);

}
