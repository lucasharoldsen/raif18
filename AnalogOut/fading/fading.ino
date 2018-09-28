// Fade in/out

int counter = 0;
int ledPin1 = 3;

void setup(){
  // No pinMode needed for analogWrite
}

void loop(){

  // Fade in
  if(counter < 255){
    counter++; // add 1 to counter each loop (same as counter = counter+1)
  }
 else{
   counter = 0;
  }

  // Fade out
  /*if(counter > 0){
    counter--; // subtract 1 to counter each loop
    //this is same as counter = counter - 1;
  }
  else{
    counter = 255;
  }*/
  
  analogWrite(ledPin1, counter);
  delay(20);  // delay to make the fade visible
}

