int brillo=0;
int variacion=5;
int led=9;

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  analogWrite(led,brillo);
  brillo=brillo+variacion;
  if(brillo==0 || brillo==255){
    variacion=-variacion;
  }
  delay(10);
}
