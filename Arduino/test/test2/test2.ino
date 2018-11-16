#include <Arduino.h>

int pinLed[10] = {2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<11;i++)
  {
  pinMode(pinLed[i], OUTPUT);
  digitalWrite(pinLed[i], LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int temps=(analogRead(0)%100)+200;
  int temps2=(analogRead(0)%1000)+1000;
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(temps);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<11; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(temps2);
}
