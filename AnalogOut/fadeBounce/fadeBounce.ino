// Fade in and out

int ledPin1 = 3;
int counter1 = 127; // Start the counter in the middle of pwm range
int fadeDirection1 = 1; // Controls direction of fade (1 or -1)

void setup(){
  // No pinMode needed for analogWrite :)
}

void loop(){

  // When we reach either end of the pwm range, reverse direction
  if(counter1 == 0 || counter1 == 255){
    fadeDirection1 *= -1; // multiply the current value of fadeDirection by -1
  }

  counter1 += fadeDirection1;  // add fadeDirection to current value of counter each loop

  analogWrite(ledPin1, counter1);
  delay(20);
}



