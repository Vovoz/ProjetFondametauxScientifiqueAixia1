
#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>
/*
 * Hello World!
 *
 * This is the Hello World! for Arduino. 
 * It shows how to send data to the computer
 */
int  Led[10] = {2, 3, 4, 5 , 6, 7, 8, 9, 10, 11}; //déclaration et initialisation du tableau

void setup()
{
  
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(Led[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(Led[i], LOW); // l'une après l'autre
  }
}

void loop()                       // run over and over again
{
    for(int i=0;i<10;i++){
    if(i%3 == 0){
      digitalWrite(Led[i], HIGH);
      delay(250);
      digitalWrite(Led[i], LOW);
      delay(250);}
    }
}


