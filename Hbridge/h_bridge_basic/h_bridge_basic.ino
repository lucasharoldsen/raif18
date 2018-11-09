 
int pin1 = 9; //input1 to Hbridge
int pin2 = 10; //input2 to Hbridge
 
void setup() {
 
  pinMode(pin1, OUTPUT); //Set the pin 9 to out put
  pinMode(pin2, OUTPUT); //Set the pin 10 to out put
}
 
void loop() {
 
  forward(50,1000); //call a function "foward" with argument for power and duration 
  still(1000); //call a function "still" with argument for duraiton
  backward(50,2000); //call a function "backward" with argument for power and duration
  still(1000);  //call a function "still" with argument for duraiton
}

void forward (int power, int duration){

  digitalWrite(pin1, LOW); //set pin 9 to LOW
  analogWrite(pin2, power); //apply analog output 0-255 to pin 10
  delay(duration); //set how long the motor to spin
}

void backward (int power, int duration){

  digitalWrite(pin2, LOW); //set pin 10 to LOW
  analogWrite(pin1, power); //apply analog output 0-255 to pin 9
  delay(duration); //set how long the motor to spin
}

void still (int duration){

  digitalWrite(pin2, LOW); //set pin 10 to LOW
  digitalWrite(pin1, LOW); //set pin 9 to LOW
  delay(duration);  //set how long the motor to stay still
}




  
