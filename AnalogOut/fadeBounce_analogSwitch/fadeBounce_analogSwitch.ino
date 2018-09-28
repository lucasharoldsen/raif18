// Fade in and out toggled with analog write

int ledPin1 = 3; // Analog out (PWM) pin 3
int counter1 = 127; // Start the counter in the middle of pwm range
int fadeDirection1 = 1; // Controls direction of fade (1 or -1)
int ledPin2 = 5; // Analog out (PWM) pin 5
int counter2 = 127; 
int fadeDirection2 = 1; 

int analog1 = A1; //potentiometer or other analog input to A1

void setup(){
  // No pinMode needed for analogWrite :)
}

void loop(){

 if (analogRead(analog1) < 500){ //if sensor value is smaller than 500
    
     if(counter1 == 0 || counter1 == 255){ 
    fadeDirection1 *= -1;
     }
      counter1 += fadeDirection1;  // add fadeDirection to current value of counter each loop
      analogWrite(ledPin1, counter1); //LED 1 fades in and out
      analogWrite(ledPin2, 0); //LED 2 is off
      
      delay(20); // speed of fading
  
  }
  
  if(analogRead(analog1) >= 500){
    
   if(counter1 == 0 || counter1 == 255){
    fadeDirection2 *= -2;
    
    // multiply the current value of fadeDirection by -1
  }

  counter2 += fadeDirection2;  // add fadeDirection to current value of counter each loop

  analogWrite(ledPin2, counter2); 
  analogWrite(ledPin1, 0);
  
  delay(20);
  



}
}





