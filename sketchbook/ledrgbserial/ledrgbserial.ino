||||||||||||||||||||/*Controlar un LED RGB por medio del monitor serial :3*/
int ledrojo=3;
int ledverde=5;
int ledazul=6;

void setup(){
  Serial.begin(9600);
  Serial.println("LED RGB");
  Serial.println("Ingresa 3 valores del 0 al 255 separados por coma");
  pinMode(ledrojo,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledazul,OUTPUT);
}

void loop(){
  while(Serial.available()>0){
    int rojo=Serial.parseInt();
    int verde=Serial.parseInt();
    int azul=Serial.parseInt();
    if(Serial.read() == '\n'){
      rojo=255-constrain(rojo,0,255);
      verde=255-constrain(verde,0,255);
      azul=255-constrain(azul,0,255);
      
      analogWrite(ledrojo,rojo);
      analogWrite(ledverde,verde);
      analogWrite(ledazul,azul);
      
      //Serial.println("LED ENCENDIDO ("+rojo+","+verde+","+azul+")");
    }
  }
}
