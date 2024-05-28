int xInteger;
float yFloat;
String zString;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Initialize serial communication
Serial.println("Enter your input here:");
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0){
  xInteger = Serial.parseInt(); //Used as serial accepts characters as well and to limit it to integers we use parseInt
  
  Serial.print("You entered: ");
  Serial.println(xInteger);
}
}
