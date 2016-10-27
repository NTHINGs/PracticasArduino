int led1=13;
int boton=8;
int estadoAnterior= LOW;  
int estadoLed=0;
int estadoBoton=0;
void setup(){
  pinMode(led1,OUTPUT);
  pinMode(boton,INPUT);
}

void loop(){
  estadoBoton=digitalRead(boton);
  if((estadoBoton == HIGH) && (estadoAnterior==LOW)){
    estadoLed=1-estadoLed;
  }
  
  estadoAnterior = estadoBoton;
  
  if(estadoLed==1){
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
  }
}
