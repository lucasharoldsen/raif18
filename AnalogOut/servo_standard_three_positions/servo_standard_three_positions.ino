#include <Servo.h>

Servo servo1;
int position1 = 180; 
int position2 = 60; 
int position3 = 10; 

void setup(){
  servo1.attach(3);
}

void loop(){

  // Move to 0 degrees and stay there within a 2 second period
  
   
  
  servo1.write(position1);
  delay(2000);
  servo1.write(position2);
  delay(3000);
  servo1.write(position3);
  delay(2000);
 
}


