// Fade in and out RGB LED

int ledPinR = 3;
int counterR = 127;
int fadeDirectionR = 1; 

int ledPinG = 5;
int counterG = 127; 
int fadeDirectionG = -1; 

int ledPinB = 6;
int counterB = 64; 
int fadeDirectionB = 1; 

void setup(){
  // No pinMode needed for analogWrite :)
}

void loop(){

  // RED LED
  if(counterR == 0 || counterR == 255){
    fadeDirectionR *= -1;
  }
  counterR += fadeDirectionR;
  
  // GREEN LED
  if(counterG == 0 || counterG == 255){
    fadeDirectionG *= -1;
  }
  counterG += fadeDirectionG; 

  // BLUE LED
  if(counterB == 0 || counterB == 255){
    fadeDirectionB *= -1;
  }
  counterB += fadeDirectionB;
   

  analogWrite(ledPinR, 0);
  analogWrite(ledPinG, 0);
  analogWrite(ledPinB, 0);
  delay(20);
}



