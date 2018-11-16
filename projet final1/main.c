#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"


int main()
{
    FILE* param = NULL;
    param = fopen("D:\\Documents\\Exia\\A1 18\\Projet Fondamentaux Scientifique\\13 Projet Fondamentaux scientifiques Cardio\\projet final1\\coeur.c\\param.h","w+");
    // Ouvrir fichier param.h

    int choix;

    // Appel de la fonction qui affiche le menu
    choix = affichermenu();

    ChoixAllumage(param,&choix);



    return 0;
}
