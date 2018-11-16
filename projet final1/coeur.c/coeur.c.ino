#include "param.h"

int  pinLed[10] = {2, 3, 4, 5 , 6, 7, 8, 9, 10, 11}; //déclaration et initialisation du tableau
//avec les valeurs des leds

void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }
}

void loop(){
  pulse();
}

void pulse()
{
  // récupération de l'écriture du fichier param.h, et lancement des fonctions prédéfinis
  
    #ifdef TOUTES_LED_ALLUMEES
    Toutes_LED_Allumees();
    #endif
   
    #ifdef CHENILLE
    Chenille();
    #endif

    #ifdef UNE_LED_SUR_DEUX
    Une_LED_Sur_Deux();
    #endif
    
  
    #ifdef UNE_LED_SUR_TROIS
    Une_LED_Sur_Trois();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_1
    choix_leds_a_allumer_1();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_2
    choix_leds_a_allumer_2();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_3
    choix_leds_a_allumer_3();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_4
    choix_leds_a_allumer_4();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_5
    choix_leds_a_allumer_5();
    #endif


    #ifdef CHOIX_LEDS_A_ALLUMER_6
    choix_leds_a_allumer_6();
    #endif

    #ifdef CHOIX_LEDS_A_ALLUMER_7
    choix_leds_a_allumer_7();
    #endif

     #ifdef CHOIX_LEDS_A_ALLUMER_8
    choix_leds_a_allumer_8();
    #endif

     #ifdef CHOIX_LEDS_A_ALLUMER_9
    choix_leds_a_allumer_9();
    #endif

     #ifdef CHOIX_LEDS_A_ALLUMER_10
    choix_leds_a_allumer_10();
    #endif

    #ifdef LED_NOUVEAU_NEE
    led_nouveau_nee();
    #endif

    #ifdef LED_1_2_ANS
    led_1_2_ans();
    #endif

     #ifdef LED_3_5_ANS
    led_3_5_ans();
    #endif

     #ifdef LED_6_12_ANS
    led_6_12_ans();
    #endif
    
    #ifdef LED_ADO_ADULTE
    led_ado_adulte();
    #endif

    #ifdef LED_PERSONNE_AGEE
    led_personne_agee();
    #endif

    #ifdef LED_COEUR_ALEATOIRE
    led_coeur_aleatoire();
    #endif

    #ifdef HAUT_BAS
    Haut_Bas();
    #endif

    #ifdef LEDS_CLIGNOTANTES
    Toutes_LED_Allumees_Clignotantes();
    #endif
 }

int Toutes_LED_Allumees ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH); //toutes les leds sont allumées
  }
  delay(100);
}
int Chenille ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH); //les leds s'allumes et s'éteint dans un ordre précis pour faire le mode chenille. 
    delay(100);
    digitalWrite(pinLed[i], LOW);    
  }
}


int Une_LED_Sur_Deux () //on allume une led sur 2
{
  for(int i=0; i<10; i++)
  {
    if (i%2==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}

int Une_LED_Sur_Trois () // on allume une led sur 3
{
  for(int i=0; i<10; i++)
  {
    if (i%3==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}
int Haut_Bas () //les leds font comme un rideau de pluie, nous avons le haut qui s'allume puis quand les leds en dessous s'allume celle du dessus s'éteigne.
{
  digitalWrite(pinLed[0], HIGH);
  digitalWrite(pinLed[8], HIGH);
  delay(100);
  digitalWrite(pinLed[9], HIGH);
  delay(100);
  digitalWrite(pinLed[1], HIGH);
  digitalWrite(pinLed[7], HIGH);
  delay(100);
  digitalWrite(pinLed[2], HIGH);
  digitalWrite(pinLed[6], HIGH);
  delay(100);
  digitalWrite(pinLed[3], HIGH);
  digitalWrite(pinLed[5], HIGH);
  delay(100);
  digitalWrite(pinLed[4], HIGH);
  delay(1000);
  digitalWrite(pinLed[0], LOW);
  digitalWrite(pinLed[8], LOW);
  delay(100);
  digitalWrite(pinLed[9], LOW);
  delay(100);
  digitalWrite(pinLed[1], LOW);
  digitalWrite(pinLed[7], LOW);
  delay(100);
  digitalWrite(pinLed[2], LOW);
  digitalWrite(pinLed[6], LOW);
  delay(100);
  digitalWrite(pinLed[3], LOW);
  digitalWrite(pinLed[5], LOW);
  delay(100);
  digitalWrite(pinLed[4], LOW);
  delay(1000);
}

// choix leds a allumer on choisit la led a allumer via la commande du c puis celon la fonction actionner nous allons avoir une led qui va s'allumer 
int choix_leds_a_allumer_1() 
{
  digitalWrite(pinLed[0], HIGH);
    delay(100);
    digitalWrite(pinLed[0], LOW);
    delay(100);
}
int choix_leds_a_allumer_2()
{
  digitalWrite(pinLed[1], HIGH);
    delay(100);
    digitalWrite(pinLed[1], LOW);
    delay(100);
}
int choix_leds_a_allumer_3()
{
  digitalWrite(pinLed[2], HIGH);
    delay(100);
    digitalWrite(pinLed[2], LOW);
    delay(100);
}
int choix_leds_a_allumer_4()
{
  digitalWrite(pinLed[3], HIGH);
    delay(100);
    digitalWrite(pinLed[3], LOW);
    delay(100);
}
int choix_leds_a_allumer_5()
{
  digitalWrite(pinLed[4], HIGH);
    delay(100);
    digitalWrite(pinLed[4], LOW);
    delay(100);
}
int choix_leds_a_allumer_6()
{
  digitalWrite(pinLed[5], HIGH);
    delay(100);
    digitalWrite(pinLed[5], LOW);
    delay(100);
}
int choix_leds_a_allumer_7()
{
  digitalWrite(pinLed[6], HIGH);
    delay(100);
    digitalWrite(pinLed[6], LOW);
    delay(100);
}
int choix_leds_a_allumer_8()
{
  digitalWrite(pinLed[7], HIGH);
    delay(100);
    digitalWrite(pinLed[7], LOW);
    delay(100);      
}
int choix_leds_a_allumer_9()
{
  digitalWrite(pinLed[8], HIGH);
    delay(100);
    digitalWrite(pinLed[8], LOW);
    delay(100);
}
int choix_leds_a_allumer_10()
{
  digitalWrite(pinLed[9], HIGH);
    delay(100);
    digitalWrite(pinLed[9], LOW);
    delay(100);
}
int led_nouveau_nee()  //calcul: 140 (pour nouveau né)/60= y/2= x milliseconde
{

  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(210);
}
int led_1_2_ans()
{
    for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(150);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(272);
}

int led_3_5_ans(){
    for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(300);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(285); //calcul: 140 (pour nouveau né)/60= y/2= x milliseconde
}

int led_ado_adulte(){
    for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(800);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(428);
}

int led_6_12_ans()
{
  
    for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(600);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(316);
}

int led_personne_agee()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(900);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(462);
}

int led_coeur_aleatoire()
{
  int temps=(analogRead(0)%100)+200;
  int temps2=(analogRead(0)%1000)+1000;
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(temps);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<8; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(temps2);
}

int Toutes_LED_Allumees_Clignotantes ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);
}
