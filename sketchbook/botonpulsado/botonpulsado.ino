int boton=2;
void setup(){
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop(){
  int estado=digitalRead(boton);
  if(estado == HIGH){
    Serial.println("NO PULSADO");
  }else{
    Serial.println("PULSADO");
  }
  delay(1000);
}
