int pinLed1,pinLed2,pinLed3,pinLed4,pinLed5,pinLed6,pinLed7,pinLed8,pinLed9,pinLed10;
void setup()
{
  //initialisation des variables
  pinLed1 =3;
  pinLed2 = 2;
  pinLed3 = 4;
   pinLed4 =5;
  pinLed5 = 11;
  pinLed6 = 10;
   pinLed7 =9;
  pinLed8 = 8;
  pinLed9 = 7;
   pinLed10 =6;
    
  //initialisation des modes
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);

  //mise à 0V de chaque pin
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
   digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
   digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10, LOW);
}
void loop()
{
  //test allumage et repérage des lEDs
  digitalWrite(pinLed1, HIGH);
  digitalWrite(pinLed2, HIGH);
  digitalWrite(pinLed3, HIGH);
  digitalWrite(pinLed4, HIGH);
  digitalWrite(pinLed5, HIGH);
  digitalWrite(pinLed6, HIGH);
  digitalWrite(pinLed7, HIGH);
  digitalWrite(pinLed8, HIGH);
  digitalWrite(pinLed9, HIGH);
  digitalWrite(pinLed10, HIGH);
  delay(1000);
  //on éteint tout
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
  digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10, LOW);
  delay(1000);
}

