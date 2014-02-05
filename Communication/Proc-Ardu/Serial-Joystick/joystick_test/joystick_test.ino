int JX = A0;
int JY = A1;
int val1 = 0;
int val2 = 0;

void setup(){
  Serial.begin(9600);
}//setup

void loop(){
  val1 = analogRead(JX);
  val2 = analogRead(JY);
  int mapped1 = map(val1, 0,1023,0,255);
  int mapped2 = map(val2, 0,1023,0,255);
  /*
  String temp = "@";
  temp = temp + mapped1 + "," + mapped2+"#";
  Serial.println(temp);
  */
  String temp = "";
  temp = temp + mapped1 + "," + mapped2+",";
  Serial.println(temp);
  //Serial.print("Joystick: ");
  //Serial.println(mapped);
  //Serial.print(" , ");
  //Serial.println(val2);
  delay(50);
}//loop
