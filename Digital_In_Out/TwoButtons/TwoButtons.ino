

const int buttonPin1 = 3;  //imput from button1
const int buttonPin2 = 2;    //imput from button2 
const int ledPin =  13;      //ledPin
int buttonState1 = 0;         // variable for reading the pushbutton1 status
int buttonState2 = 0;         // variable for reading the pushbutton2 status

void setup() {

  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output:    
  pinMode(buttonPin1, INPUT);   // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);    // initialize the pushbutton2 pin as an input:
     
}

void loop(){
  
  buttonState1 = digitalRead(buttonPin1); // read the state of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);  // read the state of the pushbutton2 value:

 
  
  if (buttonState1 == HIGH && buttonState2 == HIGH) {      // check if the pushbutton1 AND pushbutton2 is pressed.
                                                          // if it is, the buttonState is HIGH:    
    digitalWrite(ledPin, HIGH);  //turn LED on 
  } 
  else {
    
    digitalWrite(ledPin, LOW);       // turn LED off
  }



 
}
