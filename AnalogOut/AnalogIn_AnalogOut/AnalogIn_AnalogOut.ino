// AnalogIn >> AnalogOut
 //brightness value with PWM 0~255
int ledPin1 = 3; //PWM pin
int pot = A0; // potentiometer signal pin to Analog pin A0

void setup(){
  // No pinMode needed for analogWrite
  Serial.begin(9600);
}

void loop(){

int sensorValue = analogRead(pot); // reading analog value form pin A0
Serial.println(sensorValue);
  
 int bright = map(sensorValue,0,1023,0,255); //mapping the value of sensor to PWM output
  
  analogWrite(ledPin1, bright); // analog output to bringness
  delay(2);  // delay to make the fade visible
}

