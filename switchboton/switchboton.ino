int pinBoton = 8;  
int pinLed   =  13;

int estadoBoton = 0;
int estadoLed   = 0; 

int estadoAnterior = LOW;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinBoton, INPUT);
}

void loop(){
  estadoBoton = digitalRead(pinBoton);
  if ((estadoBoton == HIGH) && ( estadoAnterior == LOW)){
    estadoLed = 1 - estadoLed;  
    delay(10);          
  }

  estadoAnterior = estadoBoton;
  
  if (estadoLed == 1) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);
  }
}
