
int speakerPin = 9;

void setup() {
  // Nothing needed!
}

void loop() {
  tone(speakerPin, random(3000));
  delay(analogRead(A1));


}
