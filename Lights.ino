const int redLed = 13;
const int yellowLed = 12;
const int greenLed = 11;


void setup() {
 pinMode(redLed, OUTPUT);
pinMode(yellowLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop() {
  //Green
  digitalWrite(greenLed, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(greenLed, LOW);
   //Yellow
  digitalWrite(yellowLed, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLed, LOW);
   //Red
  digitalWrite(redLed, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, LOW);
}
