//RGB LED

/////RED/////

int ledPinR = 3; // analog output pin (digital pin with ~)
int brightnessR = 30; //PWM output value between 0 and 255

/////GREEN/////

int ledPinG = 5; // analog output pin (digital pin with ~)
int brightnessG = 60; //PWM output value between 0 and 255

/////BLUE/////

int ledPinB = 6; // analog output pin (digital pin with ~)
int brightnessB = 100; //PWM output value between 0 and 255

void setup(){
  // No pinMode needed for analogWrite 
  
}

void loop(){

  //Common Cathode RGB LED

  int brightnessR2 = 255 - brightnessR;
  int brightnessG2 = 255 - brightnessG;
  int brightnessB2 = 255 - brightnessB;

  analogWrite(ledPinR , brightnessR2);
  analogWrite(ledPinG , brightnessG2);
  analogWrite(ledPinB , brightnessB2);
  

   //Common Anode RGB LED
  /*

  analogWrite(ledPinR, brightnessR);
  analogWrite(ledPinG, brightnessG);
  analogWrite(ledPinB, brightnessB);
  */
  
  delay(20);
}
