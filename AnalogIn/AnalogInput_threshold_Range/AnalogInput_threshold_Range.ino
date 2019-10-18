int sensorPin = A0; 
int ledPin = 13;
int sensorValue = 0; 
int threshold1 = 600;
int threshold2 = 100;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(20);

  if (sensorValue > threshold2 && sensorValue < threshold1) {

    digitalWrite(ledPin,HIGH);
    
  } else {

    digitalWrite(ledPin, LOW);
  }

  
}
