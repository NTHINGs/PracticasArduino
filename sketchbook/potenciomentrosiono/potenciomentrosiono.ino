void setup(){
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valor=analogRead(A0);
  Serial.println(valor);
  if(valor >= 500){
    digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
  }
}
