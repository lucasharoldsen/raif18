
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int threshold = 850;       // variable for the threshold

void setup() {
 
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
}

void loop() {
 
  sensorValue = analogRead(sensorPin);   // read the value from the sensor:
  Serial.println(sensorValue);           // print the sensorValue to serial monitor
  delay(2); 


  if (sensorValue > threshold){      // if the sensorValue is bigger than 700
      digitalWrite(ledPin, HIGH);
    }else{                            //LED turns on
      digitalWrite(ledPin, LOW);          //LED turns off
  }
}
