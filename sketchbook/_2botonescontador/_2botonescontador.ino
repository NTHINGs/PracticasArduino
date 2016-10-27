int cont=0;

void setup(){
	Serial.begin(9600);
	pinMode(13,OUTPUT);
	pinMode(2,INPUT);
	pinMode(3,INPUT);
}

void loop(){
	if(digitalRead(3)==LOW){
		cont++;
		Serial.print("BOTON PULSADO CONT=");
		Serial.print(cont);
		Serial.println("");
                delay(1000);
	}

	if(digitalRead(2)==LOW){
		Serial.print("El led prendera ");
		Serial.print(cont);
		Serial.print(" veces");
		for(int x=0; x<cont;x++){
			digitalWrite(13,HIGH);
			delay(1000);
			digitalWrite(13,LOW);
			delay(1000);
		}
                cont=0;
	}
}
