
int pin1 = 9; //input1 to Hbridge
int pin2 = 10; //input2 to Hbridge
int buttonPin = 7; //variable for button input
int potPin = A0; // variable for analog input 
int buttonState = 0; //variable for button state


void setup() {
  pinMode(pin1, OUTPUT); //Set the pin 9 to output
  pinMode(pin2, OUTPUT); //Set the pin 10 to output
  pinMode(buttonPin, INPUT); //Set the buttonpin to input
}

void loop() {

  buttonState = digitalRead(buttonPin); //read digital input from buttonPin
  int potInput = analogRead(potPin); // read analog input from potPin
  int motorOut = map(potInput, 0, 1023, 0, 255); // map the analog input value (0 to 1013) to analog output value (0 to 255) 

  if (buttonState == HIGH){ //if button is pressed
    
    forward(motorOut,10); //call a function "foward" with argument for power(analog value) and duration 
  
  }else{

     backward(motorOut,10); //call a function "backward" with argument for power and duration 
  }
  
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

