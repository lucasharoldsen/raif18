// Fade in and out RGB LED

/////RED/////

int ledPinR = 3; // analog output pin (digital pin with ~)
int brightnessR = 0; //PWM output value between 0 and 255
int fadeAmountR = 1; //how much to fade LED by

/////GREEN/////

int ledPinG = 5; // analog output pin (digital pin with ~)
int brightnessG = 0; //PWM output value between 0 and 255
int fadeAmountG = 2; //how much to fade LED by

/////BLUE/////

int ledPinB = 6; // analog output pin (digital pin with ~)
int brightnessB = 0; //PWM output value between 0 and 255
int fadeAmountB = 3; //how much to fade LED by

void setup(){
  // No pinMode needed for analogWrite :)
  Serial.begin(9600);
}

void loop(){

  // RED LED
   brightnessR = brightnessR + fadeAmountR; //add fadeAmountR to brightnes everytime it loops 

  if (brightnessR == 0 || brightnessR == 255){ //when brightnessR is either 0 or 255, chnge the direction of fading
    fadeAmountR = -fadeAmountR; //fadeAmountR is now negative fadeAmountR
  }

  
  // GREEN LED
   brightnessG = brightnessG + fadeAmountG; //add fadeAmountG to brightnes everytime it loops 

  if (brightnessG == 0 || brightnessG == 255){ //when brightnessG is either 0 or 255, chnge the direction of fading
    fadeAmountG = -fadeAmountG; //fadeAmountG is now negative fadeAmountG
  }


  // BLUE LED
   brightnessB = brightnessB + fadeAmountB; //add fadeAmountB to brightnes everytime it loops 

  if (brightnessB == 0 || brightnessB == 255){ //when brightnessB is either 0 or 255, chnge the direction of fading
    fadeAmountB = -fadeAmountB; //fadeAmountB is now negative fadeAmountB
  }

 
  Serial.print(brightnessR); //print the brightness value
  Serial.print(" ");
  Serial.print(brightnessG); //print the brightness value
  Serial.print(" ");
  Serial.println(brightnessB); //print the brightness value
  
  analogWrite(ledPinR, brightnessR);
  analogWrite(ledPinG, brightnessG);
  analogWrite(ledPinB, brightnessB);
  delay(20);
}
