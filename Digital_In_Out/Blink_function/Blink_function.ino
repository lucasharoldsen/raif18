int led = 12; //declaring variable led and set to 12

void setup() {                
 
  pinMode(led, OUTPUT);   //initialize the led pin as an output:
     
}


void loop() {
  flash();        // call a function "flash" and run them over and over
}


void flash(){

  digitalWrite(led, HIGH);
  delay(6);               
  digitalWrite(led, LOW);    
  delay(1000);  
  digitalWrite(led, HIGH);
  delay(50);               
  digitalWrite(led, LOW);    
  delay(100); 
  digitalWrite(led, HIGH);
  delay(6);               
  digitalWrite(led, LOW);    
  delay(600); 
  digitalWrite(led, HIGH);
  delay(60);               
  digitalWrite(led, LOW);    
  delay(700);              
}
  
