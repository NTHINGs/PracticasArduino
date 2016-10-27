//si A0 0-350 led parpadea a 100 ms
//si A0 351-700 led parpadea a 500ms
//si A0 701-1023 1000 ms
//el valor de A0 imprimir en consola serial

void setup(){
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valor=analogRead(A0);
  Serial.println(valor);
  if(valor >= 0 && valor<=230){
    parpadea(100);
  }
  if(valor >=231 && valor<=462){
    parpadea(500);
  }
  if(valor >=463 && valor<=692){
    parpadea(1000);
  }
}

void parpadea(int del){
  digitalWrite(9,HIGH);
  delay(del);
  digitalWrite(9,LOW);
  delay(del);  
}
