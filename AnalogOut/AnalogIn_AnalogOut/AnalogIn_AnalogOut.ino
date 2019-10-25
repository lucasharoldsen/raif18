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
int outValue = map(sensorValue,0,1023,0,255); //mapping the value of sensor to PWM output
  
  analogWrite(ledPin1, outValue); // analog output to bringness

  Serial.print("analogIN= "); //print analogIN= 
  Serial.print(sensorValue); //print sensorValue on serial monitor
  Serial.print("\t output= "); // insert space with "\t" and print output=
  Serial.println(outValue); //print outValue
  delay(2);  // delay to make the fade visible
}
