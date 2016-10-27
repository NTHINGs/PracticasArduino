void setup(){
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop(){
  int foto=analogRead(A0);
  int conversion=780-foto;
  if(conversion < 0){
    conversion = conversion *-1;  
  }
  Serial.println(conversion);
  analogWrite(9,conversion);
  delay(100);
}
