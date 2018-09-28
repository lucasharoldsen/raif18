
int speakerPin = 9;
int counter = 100;

void setup() {
  // Nothing needed!
}

void loop() {




  if(counter < 1000){
    counter++; // add 1 to counter each loop (same as counter = counter+1)
  }
 else{
   counter = 0;
  }
  tone(speakerPin, counter);
  delay(2);


}
