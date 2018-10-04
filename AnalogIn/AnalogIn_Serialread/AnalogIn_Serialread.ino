
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);  //begin serial communication with baud rate of 9600
}

void loop() {

  sensorValue = analogRead(sensorPin);  // read the value from the sensor:
  Serial.println(sensorValue);         // print sensorValue onto the serial monitor
  delay(2);                           // allow computer to read the value
}
