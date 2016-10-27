const int analogPin = 0;    // the pin that the potentiometer is attached to
const int ledCount = 10;    // the number of LEDs in the bar graph

int ledPins[] = {
  10,9,8,7,6,5,4,3,2,1 // Here we have the number of LEDs to use in the BarGraph
  };  


void setup() {
  Serial.begin(9600);
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }}

void loop() {
  //This is the code to light up LED's
  int sensorReading = analogRead(analogPin);

  //int ledLevel = map(sensorReading, 500, 1023, 0, ledCount);
  int ledLevel = map(sensorReading, 50, 180, 0, ledCount);

  Serial.println(ledLevel);

  for (int thisLed = 0; thisLed < ledCount; thisLed++) {

    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }

    else {
      digitalWrite(ledPins[thisLed], LOW);
    }  
  }
  }
