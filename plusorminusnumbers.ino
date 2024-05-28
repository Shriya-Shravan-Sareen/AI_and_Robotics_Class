int a = -4;
void setup(){
  Serial.begin(9600);

}
void loop(){
if (a<0) {
  Serial.println("It is a negative number");
}

else if (a>0) {
  Serial.println("It is a positive number");
}

else if (a=0) {
  Serial.println("It is 0");
}
}