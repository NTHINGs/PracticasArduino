int i = 0;
int pinPotenciometro =A0;
int valorPotenciometro = 0;
void setup()
{
pinMode(pinPotenciometro, INPUT);
for (i = 2; i < 7; i++)
pinMode(i, OUTPUT);
Serial.begin(9600);
}
void loop()
{
valorPotenciometro = analogRead(pinPotenciometro);
Serial.println(valorPotenciometro, DEC);
delay(100);
if (valorPotenciometro == 0) apagarLeds();
if (valorPotenciometro > 0 && valorPotenciometro < 200) digitalWrite(2, HIGH);
if (valorPotenciometro >= 200 && valorPotenciometro < 400) digitalWrite(3, HIGH);
if (valorPotenciometro >= 400 && valorPotenciometro < 600) digitalWrite(4, HIGH);
if (valorPotenciometro >= 600 && valorPotenciometro < 800) digitalWrite(5, HIGH);
if (valorPotenciometro >= 800) digitalWrite(6, HIGH);
if (valorPotenciometro == 1023) encenderLeds();
}
void apagarLeds()
{
for (i = 2; i < 7; i++)
digitalWrite(i, LOW);
}
void encenderLeds()
{
for (i = 2; i < 7; i++)
digitalWrite(i, HIGH);
}
