int red = 2;
int yellow = 3;
int blue = 4;
int green = 5;
int white = 6;

int arr[6] = {0, red, yellow, blue, green, white};

int xInteger;

void setup() {
  // put your setup code here, to run once:
for(int i=0; i<=6; i++){
 pinMode(arr[i], OUTPUT);}

pinMode(13, OUTPUT);
pinMode(8, INPUT);
pinMode(9, OUTPUT);

Serial.begin(9600); // Initialize serial communication
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
Serial.println(" meters");

}
