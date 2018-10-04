int sensorPin1 = A0; //Analog Input Sensor pin A0
int sensorPin2 = A1; ////Analog Input Sensor pin A1

int ledPin = 13; //Digital output pin 2
int sensorValue1 = 0; // variable for sensor 1
int sensorValue2 = 0; //variable for sensor 2
int threshold1 = 600; //variable to sent threshold 1
int threshold2 = 800; //variable to sent threshold 2

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue1 = analogRead(sensorPin1); //read analog value from sensorPin1
  sensorValue2 = analogRead(sensorPin2);  //read analog value from sensorPin2
  Serial.print(sensorValue1); //print sensorValue1 to serial monitor
  Serial.print(" ");  //print space in between two values
  Serial.println(sensorValue2); // print sensorValue2
  
  delay(20); 

  if (sensorValue1 > threshold1 && sensorValue2 > threshold2) { //if sensorValue1 is greater than threshold1 AND sensorValue is greater than threshold2 

    flashled(); //perform function flashled()
    
  } else {

    digitalWrite(ledPin, LOW); //turn off LED
  }

   
}

void flashled(){  // function for LED patterns
        digitalWrite(ledPin, HIGH); // turn on LED 
        delay(200);
         digitalWrite(ledPin, LOW); //turn off LED 
        delay(20);
        digitalWrite(ledPin, HIGH); 
        delay(500);
         digitalWrite(ledPin, LOW); 
        delay(200);      
        digitalWrite(ledPin, HIGH); 
        delay(700);
         digitalWrite(ledPin, LOW); 
        delay(200);
        digitalWrite(ledPin, HIGH); 
        delay(500);
         digitalWrite(ledPin, LOW); 
        delay(200);      
}

