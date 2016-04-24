int currentSpeed = 0;

void setup() {
  // put your setup code here, to run once:

  // declare pin 5 to be an output:
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // set the motorSpeed of pin 5:
  currentSpeed = (analogRead(A2)/4);
  analogWrite(5, currentSpeed);
  if (currentSpeed > 5){
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
