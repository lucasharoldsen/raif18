int sensorPin = A0; //Analog Input Sensor pin A0
int led1 = 11; //Digital output pin 11
int led2 = 12; //Digital output pin 12
int led3 = 13; //Digital output pin 13
int sensorValue = 0; // variable for sensor value


void setup() {
  pinMode(led1,OUTPUT); //set the led1 to output
  pinMode(led2,OUTPUT); //set the led2 to output
  pinMode(led3,OUTPUT); //set the led3 to output
  Serial.begin(9600); //start the serial communication with boudrate of 9600
}

void loop() {
  sensorValue = analogRead(sensorPin); // //read analog value from sensorPin and store it in variable 'sensorValue'
  Serial.println(sensorValue); //print the sensorValue in serial monitor
  delay(20); //wait for 20 milliseconds

  if (sensorValue < 200 ) {   //if sensorValue is smaller than 200

    digitalWrite(led1,HIGH); //turn led1 on
    digitalWrite(led2, LOW); //turn led2 off
    digitalWrite(led3, LOW); //turn led off
    
  } else if (sensorValue >= 200 && sensorValue < 400){ // if sensorValue is greator than and equals to 200 AND smaller than 400

     digitalWrite(led1, LOW); //turn led1 off
    digitalWrite(led2, HIGH); //turn led2 on
    digitalWrite(led3, LOW); //turn led3 off
    
  } else if (sensorValue >= 400 && sensorValue < 600){ // if sensorValue is greator than and equals to 400 AND smaller than 600
    
    digitalWrite(led1, LOW); //turn led1 off
    digitalWrite(led2, LOW); //turn led2 off
    digitalWrite(led3, HIGH); //turn led3 on
  } else {

    digitalWrite(led1, LOW); //turn led1 off
    digitalWrite(led2, LOW); //turn led2 off
    digitalWrite(led3, LOW); //turn led2 off
  }
  

  
}
