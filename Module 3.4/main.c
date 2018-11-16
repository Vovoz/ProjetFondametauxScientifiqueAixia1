#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"
#include "donnees.h"


int main()
{
    system("mode con: cols=51 lines=25");
    system("color f1");
    printf("\a3.4 MODULE LECTURE ET TRAITEMENT DE DONNEES\n\n"
"         00000000000            000000000000\n"
"      00000000_____00000   000000______0000000\n"
"    0000000_____________000_______________00000\n"
"   0000000_______________0__________________0000\n"
"  000000___________1___________1____________0000\n"
"  00000_______________1_____1________________0000\n"
" 00000__________________1_1__________________00000\n"
" 00000___________________1__________________000000\n"
"  000000_________________1________________0000000\n"
"   0000000______________1_1______________0000000\n"
"     000000___________1_____1___________000000\n"
"       000000______1___________1______000000\n"
"          00000______________________0000\n"
"            0000___________________0000\n"
"              0000_______________000\n"
"                 000___________000\n"
"                   000_______000\n"
"                      00___00\n"
"                        0_0                         "
"                        0                           \n\n");
    //printf("\n-----------------------------------------------------------------------------------------");
    system("pause");
    system("cls");

    FILE* battements = NULL;
    battements = fopen("battements.csv", "r");

    int choix;
    choix = AfficherMenu();
    if (choix == 1)
    {
        Choix_1(battements);
    }
    else if (choix == 2)
    {
        Choix_2(battements);
    }
    else if (choix == 3)
    {
        Choix_3(battements);
    }
    else if (choix == 4)
    {
        Choix_4(battements);
    }
    else if (choix == 5)
    {
        Choix_5(battements);
    }
    else if (choix == 6)
    {
        Choix_6(battements);
    }
    else if (choix == 7)
    {
        Choix_7(battements);
    }

    else
    {
        return 0;
    }
}
