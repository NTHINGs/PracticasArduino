#include <EEPROM.h>
int cantidadleds=4;
int pinanalogico=0;
int botonpin=4;
int ledguardar=0;

int guardar=0;
int leer=0;
int contador=0;

int leds[]={13,8,7,2};

void setup(){
  Serial.begin(9600);
  for (int led=0; led<cantidadleds;led++){
    pinMode(leds[led], OUTPUT);
  }
  
  pinMode(botonpin,INPUT);
  pinMode(ledguardar,OUTPUT);
}

void mostrar(){
  leer=EEPROM.read(0);
  for(int led=0;led<cantidadleds;led++){
    if(led<leer){
      digitalWrite(leds[led],HIGH);
    }else{
      digitalWrite(leds[led],LOW);
    }
  }
  delay(3000);  
}
void loop(){
  int sensor=analogRead(pinanalogico);
  int nivel;
  if(sensor<70) nivel=0;
  if(sensor>=70 && sensor<=150) nivel=1;
  if(sensor>150 && sensor<=250) nivel=2;
  if(sensor>250 && sensor<=300) nivel=3;
  if(sensor>300) nivel=4;
  Serial.print(nivel);
  Serial.print(" : ");
  Serial.print(sensor);
  Serial.println();
  
  for(int led=0;led<cantidadleds;led++){
    if(led < nivel){
      digitalWrite(leds[led],HIGH);
    }  
    else{
      digitalWrite(leds[led],LOW);
    }
  }
  
  guardar=digitalRead(botonpin);
  if(guardar==HIGH){
    if(contador==0){
      digitalWrite(ledguardar,HIGH);
      EEPROM.write(0, nivel);
      contador++;
      delay(1000);
    }else{
      mostrar();
      contador=0;
    }
  }else{
    digitalWrite(ledguardar, LOW);
  }
  
}
