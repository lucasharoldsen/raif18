
int led4 = 13; //LED Pins
int led3 = 9;
int led2 = 4;
int led1 = 2;

int button = 7; //pin 7 connected to push button or hand made button


void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT);  
  pinMode(button, INPUT); 
  Serial.begin(9600);  //initialize the serial communication
}


void loop() {

   int buttonState = digitalRead(button); //check if the button is pressed

    if (buttonState == 1){   // if the button is pressed
      int randomNumbers = random(1,5); //generate a ramdom number between 1 and 4

      if (randomNumbers == 1){ //if the random number is 1, 
        ledflash(led1);        // Do this!
      }
      if (randomNumbers == 2){ //if the random number is 2, 
        ledflash(led2);        // Do this!
      }
      if (randomNumbers == 3){ //if the random number is 3, 
        ledflash(led3);        // Do this!
      } 
      if (randomNumbers == 4){ //if the random number is 4, 
        ledflash(led4);        // Do this!
      }

      Serial.println(randomNumbers); //print random numbers in serial monitor
    

      
    }else{
      digitalWrite(led1,LOW); //if button is NOT pressed, all LEDs are off
       digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
         digitalWrite(led4,LOW);
    }
         
         
            

  
  
            
}


void ledflash(int pin){ // a simple function for blinking an LED

  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a 100 milisecond
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);      

}

