#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

//fonction menu
int affichermenu()
{
    int choix = 0;

    printf("\nBonjour,\n-si vous souhaitez que toutes les LED s'allument appuyez sur: 1;\n-si vous souhaitez que une LED sur deux s'allume appuyez sur: 2;\n-si vous souhaitez que une LED sur trois s'allume appuyez sur: 3;\n-si vous souhaitez que les LED s'allument les une a la suite des autres appuyez sur: 4;\n-si vous souhaitez qu'une seule LED au choix s'allume appuyez sur: 5;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'un nouveau-ne appuyez sur: 6;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'une personne ayant entre 1 et 2 ans appuyer sur: 7;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'une personne ayant entre 3 et 5 ans appuyer sur: 8;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'une personne ayant entre 6 et 12 ans appuyer sur: 9;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'un adolescent ou adulte appuyer sur: 10;\n-si vous souhaitez avoir la representation de la frequence cardiaque d'une personne agee appuyer sur: 11;\n-si vous souhaitez que toutes les LED s'allument du haut vers le bas appuyez sur: 12;\n-si vous souhaitez que toutes les LED clignotent appuyez sur: 13.\n");
    scanf("%d",&choix);

    return choix;

}


