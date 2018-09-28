int ledPin = 3;

void setup() {
}


void loop() {
                 
  analogWrite(ledPin,random(255));  
  delay(100);
}
