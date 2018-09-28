#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int counter = 0;  // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  if(counter < 180){
    counter++; // add 1 to counter each loop (same as counter = counter+1)
  }
 else{
   counter = 0;
  }
  
    myservo.write(counter);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  
}
