// Fade in and out

int ledPin1 = 3; // analog output pin (digital pin with ~)
int brightness = 0; //PWM output value between 0 and 255
int fadeAmount = 1; //how much to fade LED by

void setup(){
  // No pinMode needed for analogWrite
  Serial.begin(9600);
}

void loop(){

  brightness = brightness + fadeAmount; //add fadeAmount to brightnes everytime it loops 

  if (brightness == 0 || brightness == 255){ //when brightness is either 0 or 255, chnge the direction of fading
    fadeAmount = -fadeAmount; //fadeAmount is now negative fadeAmount
  }

  Serial.print(fadeAmount); //print the current fadeAmount Value
  Serial.print(" ");        //separate the printed variables
  Serial.println(brightness); //print the brightness value
 
  
  

  analogWrite(ledPin1, brightness); //output analog value to ledPin1
  delay(30);
}
