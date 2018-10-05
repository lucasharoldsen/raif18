

const int buttonPin1 = 3;  //imput from button1
const int buttonPin2 = 2;    //imput from button2 
const int ledPin =  13;       //ledPin
const int ledPin2 = 12;       //ledPin2
int buttonState1 = 0;         // variable for reading the pushbutton1 status
int buttonState2 = 0;         // variable for reading the pushbutton2 status
int ledstate = 0;              // variable for state of LED
int ledstate2 = 0;             // variable for state of LED2

void setup() {

  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output: 
   pinMode(ledPin2, OUTPUT);    // initialize the LED pin2 as an output: 
  pinMode(buttonPin1, INPUT);   // initialize the pushbutton pin as an input:
  pinMode(buttonPin2, INPUT);    // initialize the pushbutton2 pin as an input:
     
}

void loop(){
  
  buttonState1 = digitalRead(buttonPin1); // read the state of the pushbutton value:
  buttonState2 = digitalRead(buttonPin2);  // read the state of the pushbutton2 value:

 
  
  if (buttonState1 == HIGH) {      // check if the pushbutton1 is pressed.
                                     // if it is, ledstate is NOT ledstate (meaning state flips: 0 becomes 1 and 1 becomes 0 )   
    ledstate = !ledstate;
    delay(200);                     //delay so button won't get triggered too often
  }

   if (buttonState2 == HIGH) {      // check if the pushbutton2 is pressed.
                                           
    ledstate2 = !ledstate2;          // if it is, ledstate2 is NOT ledstate (meaning state flips: 0 becomes 1 and 1 becomes 0 ) 
    delay(200);
  }

  digitalWrite(ledPin, ledstate);    //output to ledPin with ledstate value
  digitalWrite(ledPin2,ledstate2);   ////output to ledPin2 with ledstate2 value

  if (ledstate == 1 && ledstate2 == 1){  //if ledstate and ledstate2 are both 1
  ledflash(); // call ledflash function
  ledstate = 0 ; // reset ledstate to 0
  ledstate2 = 0; // reset ledstate2 to 0
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

