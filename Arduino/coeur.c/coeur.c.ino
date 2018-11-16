#include "param.h"
/*
  Pour ce programme on utilise des LEDs connectées sur les pins 2,4 et 6
*/

int  Led[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //déclaration et initialisation du tableau
//avec les valeurs des pins

void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(Led[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(Led[i], LOW); // l'une après l'autre
  }
}

void loop(){
  pulse();
}

void pulse()
{
    #ifdef TOUTES_LED_CLIGNOTANTES
    toutes_leds_clignotantes();
    #endif
 
    #ifdef MODE_CHENILLE
    mode_chenille();
    #endif
  
    #ifdef LED_1_LED_SUR_2_ALLUMEE
    led_1_led_sur_2_allumee();
    #endif
    
    #ifdef LED_1_SUR_3_ALLUMEE
    led_1_led_sur_3_allumee();
    #endif

    #ifdef CHOIX_LED_A_ALLUMER
    choix_led_a_allumer(PIN_LED_ON);
    #endif
 }

int toutes_leds_clignotantes()
{
  
  //on allume les 3 LED (ici en utilisant une boucle)
  for (int i = 0; i < 10; i) // on parcourt le tableau
  {
    digitalWrite(Led[i], HIGH);// on allume
  }
  delay(1000); //pendant 1 seconde
  //puis on les éteint brièvement (ici en utilisant leur position dans le tableau)
  digitalWrite(Led[0], LOW); // on éteint la 1
  digitalWrite(Led[1], LOW); // on éteint la 2
  digitalWrite(Led[2], LOW); // on éteint la 3
  digitalWrite(Led[3], LOW); // on éteint la 4
  digitalWrite(Led[4], LOW); // on éteint la 5
  digitalWrite(Led[5], LOW); // on éteint la 6
  digitalWrite(Led[6], LOW); // on éteint la 7
  digitalWrite(Led[7], LOW); // on éteint la 8
  digitalWrite(Led[8], LOW); // on éteint la 9
  digitalWrite(Led[9], LOW); // on éteint la 10
  delay(100);//délai bref

  //Boucle pour diminuer le temps d’allumage des LED
  for (int temps = 1000; temps >= 200; temps -= 200)
  {
    //Les trois LED sont éteintes
    for (int i = 0; i < 10; i++) // t pour parcourir le tableau
    {
      digitalWrite(Led[i], HIGH);//on allume la LED correspondante
      delay(temps); // pendant la valeur de temps
      digitalWrite(Led[i], LOW); //on éteint la correspondante
      delay(100); // court délai pendant lequel les 3 LED sont éteintes
    }
    //on a allumé les 3 LED pendant une durée “temps”, la boucle reprend avec une valeur “temps” décrémentée
  }
}

int mode_chenille()
{
  for (int i = 0; i < 10; i++) {
    digitalWrite(Led[i], HIGH);
    delay(250);
    digitalWrite(Led[i], LOW);
    delay(250);
  }
}

int led_1_led_sur_2_allumee()
{
  for(int i=0;i<10;i++){
    if(i%2 == 0){
      digitalWrite(Led[i], HIGH);
      delay(250);
      digitalWrite(Led[i], LOW);
      delay(250);
    }
}
}

int led_1_led_sur_3_allumee()
{
    for(int i=0;i<10;i++){
    if(i%3 == 0){
      digitalWrite(Led[i], HIGH);
      delay(250);
      digitalWrite(Led[i], LOW);
      delay(250);
    }
}
}

int choix_led_a_allumer(int pin)
{
   digitalWrite(Led[8], HIGH);
}
