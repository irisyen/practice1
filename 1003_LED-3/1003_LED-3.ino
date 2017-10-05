// this constant won't change: 
const int btnPin = 2; // the pin that the pushbutton is attached to 
const int ledPin = 13; // the pin that the LED is attached to 
  
// Variables will change: 
int btnState = 0; // current state of the button 
int lastBtnState = 0; // previous state of the button 
int state = 0; //result state 

void setup() { 
  // initialize the button pin as a input: 
  pinMode(btnPin, INPUT); 
  // initialize the LED as an output: 
  pinMode(ledPin, OUTPUT); 
  // initialize serial communication: 
  Serial.begin(9600); 
} 
  
  
void loop() { 
  // read the pushbutton input pin: 
  btnState = digitalRead(btnPin); 

  if(btnState == HIGH && lastBtnState == LOW ){ 
    state = 1 - state; //keep state only has 0 or 1 
    delay(100); 
  } 
  lastBtnState = btnState; 

  if(state == 1){ 
    //do something 
    digitalWrite(13,HIGH); 
  } else{ 
    //dont do something 
    digitalWrite(13,LOW); 
  } 

  Serial.print("btnstate:"); 
  Serial.println(btnState); 
  Serial.print("lastbtnstate:"); 
  Serial.println(lastBtnState); 
  Serial.print("state:"); 
  Serial.println(state); 
 // delay(1000); 
   
}

    
  
  

