unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 10;  //the value is a number of milliseconds between changes of brightness
int brightness = 0;       //initial brightness
int increment = 1;        //amount to change the brightness at the end of each period.

const int buttonPin1 = 3;    //imput from button1
const int buttonPin2 = 2;    //imput from button2 
const int ledPin =  10;       //ledPin
const int ledPin2 = 11;       //ledPin2
int buttonState1 = 0;         // variable for reading the pushbutton1 status
int buttonState2 = 0;


void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == 1) {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
      // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);
      // wait for 30 milliseconds to see the dimming effect
      delay(30);
      }
      
      // fade out from max to min in increments of 5 points:
      for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
        // sets the value (range from 0 to 255):
        analogWrite(ledPin, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(3);
  }
  }

   if (buttonState2 == 1) {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
      // sets the value (range from 0 to 255):
      analogWrite(ledPin2, fadeValue);
      // wait for 30 milliseconds to see the dimming effect
      delay(30);
      }
      
      // fade out from max to min in increments of 5 points:
      for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
        // sets the value (range from 0 to 255):
        analogWrite(ledPin2, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(3);
  }
  }

  
}
