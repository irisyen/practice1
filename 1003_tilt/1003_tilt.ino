const int Mytilt=4;// 固定pin腳4

int val=0;// 0 還沒發生
int state = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(Mytilt, INPUT);
  Serial.begin(9600); //要用serial communication, 9600是正常speed,設定速度
}



void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(Mytilt);
  Serial.print("sensor:");
  Serial.println(val); //呈現成一行一行的值,也可以用Serial.println(digitalRead(2))
  //delay(1000);

  if (val== HIGH){
    digitalWrite(13,HIGH);// high 可以用1 表示, Low可以用0表示
  }
  else{
    digitalWrite(13, LOW);
    
  }

}
