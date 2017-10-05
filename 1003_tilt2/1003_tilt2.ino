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
  Serial.print("state: ");
  Serial.println(state);
  delay(1000);

  

  if (val!= HIGH){  //如果sensor立起來
    state--;   //遞減十次
  }else{     //如果不是立起來
    digitalWrite(13,LOW);
    state=10;  //放下就變成10

  }

  
  if(state == 0){   //遞減十次到0
    digitalWrite(13,HIGH);  //亮
    //state = 10;
  }


}
