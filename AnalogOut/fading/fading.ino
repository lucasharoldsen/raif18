// Fade in/out

int outValue = 0; //PWM output value
int ledPin1 = 3; // analog output pin (digital pin with ~)

void setup(){
  // No pinMode needed for analogWrite
  Serial.begin(9600); //start the serial communication
}

void loop(){


  // Fade in
  outValue = outValue + 1; // add 1 to outValue everytime it loops
  
  if(outValue > 255){ //if outValue gets larger than 255
    outValue = 0; // set the outValue back to 0
  }
 
  // Fade out
  /*
    outValue = outValue - 1;
    
    if(outValue < 0){ //if outValue gets smaller than 0
    outValue = 255;  // set the outValue back to 255
    }
  */

  Serial.println(outValue * 5.0/255); // print volatage that is outputting on to serial monitor
  analogWrite(ledPin1, outValue);
  delay(10);  // delay to make the fade visible
}
