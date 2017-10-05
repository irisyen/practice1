const int btnPin  = 2;
const int ledPin = 13;
int btnState=0;   //自己定義讀取的

void setup() {
  // put your setup code here, to run once:
  pinMode(btnPin, INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(btnPin);

  Serial.print("state:");
  Serial.println(btnState); // 在監控室穿可以顯示

  
  if(btnState == HIGH){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin, LOW);  
  }  
  

}
