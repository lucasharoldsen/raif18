unsigned long startMillis1;  //Make a variable for timer1
unsigned long startMillis2;  //Make a variable for timer2
unsigned long currentMillis;  //variable for updating the timer
const unsigned long period = 2;  //the value is a number of milliseconds between changes of brightness
const unsigned long period2 = 5;  //the value is a number of milliseconds between changes of brightness
int brightness = 0;       //initial brightness
int brightness2 = 0;     //initial brightness
int increment = 1;        //amount to change the brightness at the end of each period.

const int buttonPin1 = 3;    //imput from button1
const int buttonPin2 = 2;    //imput from button2 
const int ledPin =  10;       //ledPin
const int ledPin2 = 11;       //ledPin2
int buttonState1 = 0;         // variable for reading the pushbutton1 status
int buttonState2 = 0;         // variable for reading the pushbutton2 status


void setup() {
  pinMode(ledPin, OUTPUT);   //pin for led1
  pinMode(ledPin2, OUTPUT);  //pin for led2
  pinMode(buttonPin1, INPUT);   //pin for button2 
  pinMode(buttonPin2, INPUT);   //pin for button2
  startMillis1 = millis();  //start time for timer1
  startMillis2 = millis();  //start time for timer2
}

void loop() {
  currentMillis = millis();  //get the current time
  // fade in from min to max in increments of 1 points:
  buttonState1 = digitalRead(buttonPin1); //read button value from buttonPin1
  buttonState2 = digitalRead(buttonPin2); // //read button value from buttonPin2

 
   if (buttonState1 == 1) { // if button1 is pressed
  
    if (currentMillis - startMillis1 >= period){  //if current time - lastchecked time is greator than periods ( if the time has passed more than period1(2 milisecond)
      analogWrite(ledPin, brightness); // PWM out with balue of brightness
      brightness = brightness + increment;  // add increment value to the brightness 
      startMillis1 = currentMillis;  //reset the timer
      }
      
     }

      if (buttonState2 == 1) {
  
    if (currentMillis - startMillis2 >= period2){
      analogWrite(ledPin2, brightness2);
      brightness2 = brightness2 + increment;
      startMillis2 = currentMillis;
      }
      
     }

  
}




