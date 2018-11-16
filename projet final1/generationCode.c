#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

void ChoixAllumage(FILE* param,int* choix)
{


    int choix3 = 0;


     //Boucle if selon le choix de l'utilisateur
    if(*choix == 1)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define TOUTES_LED_ALLUMEES",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
    else if(*choix == 2)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define UNE_LED_SUR_DEUX",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
     else if(*choix == 3)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define UNE_LED_SUR_TROIS",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
    else if(*choix == 4)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHENILLE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
else if(*choix == 5)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        //Ici il s'agit du cas ou l'on veut allumer une seule LED , on demande donc � l'utilisateur la LED de son choix
        //Appel de la fonction correspondante
        choix3 = FonctionChoixLed(param);

    }

else if(*choix == 6)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_NOUVEAU_NEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
else if(*choix == 7)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_1_2_ANS",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }

else if(*choix == 8)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_3_5_ANS",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }
else if(*choix == 9)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_6_12_ANS",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }


else if(*choix == 10)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_ADO_ADULTE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }

    else if(*choix == 11)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_PERSONNE_AGEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }

else if(*choix == 12)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define HAUT_BAS",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }

else if(*choix == 13)
    {
        // �criture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LEDS_CLIGNOTANTES",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre");
        fclose(param);
    }

}
//fonction pour allumer la led au choix
//ecriture dans param.h de l'instruction correspondant a la led
int FonctionChoixLed(FILE* param)
{
        int choix2 = 0;

        printf("Quelle LED voulez-vous allumer ?\n");
        scanf("%d",&choix2);

        if(choix2 == 1)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_1",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 2)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_2",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 3)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_3",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 4)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_4",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 5)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_5",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 6)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_6",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 7)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_7",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 8)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_8",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 9)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_9",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }
        else if(choix2 == 10)
        {
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define CHOIX_LEDS_A_ALLUMER_10",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Votre choix a ete enregistre\n");
        fclose(param);
        }

        return choix2;

}
