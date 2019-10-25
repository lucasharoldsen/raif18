#include <Servo.h>  // include servo library!

Servo myservo;  // create servo object to control a servo
int position1 = 0;  // variable to store the servo position
int position2 = 120;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  
    myservo.write(position1);              // tell servo to go to position in variable 'pos'
    delay(1000);                        
    myservo.write(position2);              // tell servo to go to position in variable 'pos'
    delay(1000);                          
}
