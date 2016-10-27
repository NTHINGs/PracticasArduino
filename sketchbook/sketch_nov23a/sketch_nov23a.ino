 /* 
             Boton como switch con un led, ahora con debouncing

             Cambia el estado de un led, prendido o apagado, 
             cuando se oprime el boton y hay un cambio en el estado anterior   

           */

           // constantes para definir los pines del boton y del led
           const int pinBoton = 12;   // el numero del pin con el boton
           const int pinLed   =  9;   // el numero del pin con el LED

           // variables para guardar los valores de los sensores y actuadores
           int estadoBoton = 0;    // variable para guardar el estado del boton
           int estadoLed   = 0;    // variable para guardar el estado del led 

           int estadoAnterior = LOW;   // variable para guardar el estado anterior del boton

           void setup() {
             // inicializa el pin del led como de salida
             pinMode(pinLed, OUTPUT);
             // inicializa el pin del boton como de entrada    
             pinMode(pinBoton, INPUT);
           }

           void loop(){
             // lee el valor del estado del boton
             estadoBoton = digitalRead(pinBoton); // lee el estado del boton en pinBoton
             // checa si el estado del boton es HIGH Y si el estado anterior es LOW
             if ((estadoBoton == HIGH) && ( estadoAnterior == LOW)){
               estadoLed = 1 - estadoLed;   // si es asi cambia el estado del led
               delay(10);                   // y hace un delay de 10 milisegundos antes de continuar
             }

             estadoAnterior = estadoBoton; // actualiza el estadoAnterior

             if (estadoLed == 1) {
               digitalWrite(pinLed, HIGH); // prende el led
               } else {
               digitalWrite(pinLed, LOW);  // apaga el led
               }
            }
