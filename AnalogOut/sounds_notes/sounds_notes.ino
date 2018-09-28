// Using tone to produce sound with Piezo speaker
 #include "pitches.h"
int speakerPin = 9;

void setup() {
  // Nothing needed!
}

void loop() {
  tone(speakerPin, NOTE_C4);
  delay(1000);

  tone(speakerPin, NOTE_FS4);
  delay(1000);
}
