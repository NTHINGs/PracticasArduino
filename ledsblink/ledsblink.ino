int led1=13;
int led2=12;
int led3=11;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop(){
  int del=1000;
  digitalWrite(led1, HIGH);
  delay(del);
  digitalWrite(led1, LOW);
  delay(del);
  digitalWrite(led2, HIGH);
  delay(del);;
  digitalWrite(led2, LOW);
  delay(del);
  digitalWrite(led3, HIGH);
  delay(del);
  digitalWrite(led3, LOW);
  delay(del);
  digitalWrite(led2, HIGH);
  delay(del);
  digitalWrite(led2, LOW);
  delay(del);
}
