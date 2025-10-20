int ledPin = 13;
int delayTime = 100;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);

  delayTime += 100;
  if (delayTime > 1000)
    delayTime = 100;
}
