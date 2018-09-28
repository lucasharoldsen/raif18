
int speakerPin = 9;
int pot = A0;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 int reading = analogRead(pot);
 int pitch;
  pitch = map(reading, 0,1023,0,10000);
  tone(speakerPin, pitch);
  delay(1);
}
