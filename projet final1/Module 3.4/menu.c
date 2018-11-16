

int AfficherMenu ()
{
    int choix;
    system("mode con: cols=90 lines=25");
    printf("\n\tQue voulez vous faire?\n\n");
    printf(" 1 - Afficher les donnees dans l'ordre du fichier\n");
    printf(" 2 - Afficher les donnees dans l'ordre croissant\n");
    printf(" 3 - Afficher les donnees dans l'ordre decroissant\n");
    printf(" 4 - Afficher les donnees pour un temps particulier\n");
    printf(" 5 - Afficher les donnees dans une plage de temps donnee\n");
    printf(" 6 - Afficher le nombre de lignes de donnees actuellement en memoire\n");
    printf(" 7 - Afficher la valeur maximum et minimum du pouls\n");
    printf(" 8 - Quitter \n");
    printf("-----------------------------------------------------------------------------------------");

    printf("\n\t |--> Votre Choix : ");

    scanf("%d",&choix);
    printf("\n-----------------------------------------------------------------------------------------");
    printf("\n");
    return choix;
}
