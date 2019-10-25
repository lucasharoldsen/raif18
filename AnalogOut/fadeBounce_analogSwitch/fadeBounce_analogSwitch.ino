// Fade in and out toggled with analog write

int ledPin1 = 3; // Analog out (PWM) pin 3
int counter1 = 127; // Start the counter in the middle of pwm range
int brightness = 0; //PWM output value between 0 and 255
int fadeAmount = 1; //how much to fade LED by
int analog1 = A1; //potentiometer or other analog input to A1
int sensorValue = 0;

void setup(){
  // No pinMode needed for analogWrite 
  Serial.begin(9600);
}

void loop(){

  sensorValue = analogRead(analog1);

 if (sensorValue < 500){ //if sensor value is smaller than 500
  brightness = brightness + fadeAmount; //add fadeAmount to brightnes everytime it loops 
  }

  if (brightness == 0 || brightness == 255){ //when brightness is either 0 or 255, chnge the direction of fading
    fadeAmount = -fadeAmount; //fadeAmount is now negative fadeAmount
  }


  Serial.print(fadeAmount); //print the current fadeAmount Value
  Serial.print(" ");        //separate the printed variables
  Serial.print(brightness); //print the brightness value
   Serial.print(" ");
  Serial.println(sensorValue);
  

  analogWrite(ledPin1, brightness); //output analog value to ledPin1
  delay(30);
}

    
     
