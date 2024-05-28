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

/*pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
pinMode(white, OUTPUT);*/

Serial.begin(9600); // Initialize serial communication
Serial.println("Enter your input here:");
}

void loop() {
  // put your main code here, to run repeatedly:
  xInteger = Serial.parseInt();
  int i = xInteger;
  digitalWrite(arr[xInteger], HIGH);
  delay(500);
  digitalWrite(arr[xInteger], LOW);

  /*int i = random(0, 5);
  digitalWrite(arr[i], HIGH);
  delay(100);
  digitalWrite(arr[i], LOW);*/
}
