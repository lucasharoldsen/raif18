
const int buttonPin1 = 3;    //imput from button1
const int buttonPin2 = 2;    //imput from button2 
const int ledPin =  13;       //ledPin
const int ledPin2 = 12;       //ledPin2
int buttonState1 = 0;         // variable for reading the pushbutton1 status
int buttonState2 = 0;         // variable for reading the pushbutton2 status
int ledstate = 0;              // variable for state of LED
int ledstate2 = 0;              // variable for state of LED2
int counter = 0;                //variable for counting the number of LED press
int limit = 5;                  //limit of LED press we are going to count 



void setup() {

 pinMode(ledPin, OUTPUT);       // initialize the LED pin as an output: 
   pinMode(ledPin2, OUTPUT);    // initialize the LED pin2 as an output: 
  pinMode(buttonPin1, INPUT);   // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);    // initialize the pushbutton2 pin as an input:
}

void loop(){
  
  buttonState1 = digitalRead(buttonPin1); // read the state of the pushbutton value:
  
  
  if (buttonState1 == HIGH) {      // check if the pushbutton1 OR pushbutton2 is pressed.
    
    counter = counter + 1;         //plus 1 to the counter value 
    digitalWrite(ledPin, HIGH);    //turn LED on 
    delay(200);                    //delay a little so we wont trigger button too often 
  } 
  else {
    
    digitalWrite(ledPin, LOW);       // turn LED off:
  }


  if (counter == limit){  //if the counter value reaches the limit
    ledflash();           // call the led flash function
    counter = 0;
  }

}

void ledflash(){ //led flash function
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(100);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(100);

}


