

void Choix_1 (FILE* battements)
{

    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<sizetab;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    for(i=0;i<sizetab;i++)
    {
        printf("%d\n", donnees[i]);
    }
}

void Choix_2 (FILE* battements)
{
    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<sizetab;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    croissant(donnees,sizetab);
    for(i=0;i<sizetab;i++)
    {
        printf("%d\n", donnees[i]);
    }
}

void Choix_3 (FILE* battements)
{
    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<sizetab;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    decroissant(donnees,sizetab);
    for(i=0;i<sizetab;i++)
    {
        printf("%d\n", donnees[i]);
    }

}

void Choix_4 (FILE* battements)
{
    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<4;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    unique_search(donnees,sizetab);
}

void Choix_5 (FILE* battements)
{
    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<sizetab;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    plage_moyenne(donnees,sizetab);
}

void Choix_6 (FILE* battements)
{
    printf("%d",init_size(battements));
}

void Choix_7 (FILE* battements)
{
    int *donnees;
    int i,sizetab;
    sizetab=init_size(battements);
    donnees=malloc(sizeof(int)*sizetab);
    for(i=0;i<sizetab;i++)
    {
        fscanf(battements, "%d\n", &donnees[i]);
    }
    min_et_max(donnees,4);
}

int croissant(int *tab, int sizetab)
{
    int b, i, c;
    do
    {
        b=sizetab;
        for(i=0;i<sizetab;i++)
        {
            if(tab[i]>tab[i+1]&&i<(sizetab-1))
            {
                c=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=c;
            }
            else
            {
                b--;
            }
        }
    }while(b>0);
    return *tab;

}

int decroissant(int *tab, int sizetab)
{
    int b, i, c;
    do
    {
        b=sizetab;
        for(i=0;i<sizetab;i++)
        {
            if(tab[i]<tab[i+1]&&i<(sizetab-1))
            {
                c=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=c;
            }
            else
            {
                b--;
            }
        }
    }while(b>0);
    return *tab;

}

int unique_search (int *tab, int sizetab)
{
    int temps;
    printf("\tA quelle valeur voulez vous votre pouls?\n");
    scanf("%d", &temps);
    if(temps<sizetab)
    {
        printf("%d", tab[temps-1]);
    }
}

void min_et_max (int *tab, int sizetab)
{
    int i, a, b;
    int maxi, mini;
    mini = tab[1];
    maxi = tab [1];
    for(i=0;i<sizetab;i++)
    {
        if (mini>=tab[i])
        {
            mini = tab[i];
            a = i+1;
        }
        else if (maxi<=tab[i])
        {
            maxi = tab[i];
            b = i+1;
        }
    }
    printf("La valeure mini est %d a la seconde %d\n", mini, a);
    printf("La valeure maxi est %d a la seconde %d\n", maxi, b);
}

void plage_moyenne (int *tab, int sizetab)
{
    int mini, maxi;
    int i, a;
    float b;
    a = 0;
    int *tab2;
    printf("Entrez les temps de votre plage de donnees : \n");
    printf("Valeure min : ");
    scanf("%d",&mini);
    printf("Valeure max : ");
    scanf("%d",&maxi);
    tab2 = malloc(sizeof(int)*(maxi-(mini-1)));
    for(i=mini-1; i<maxi; i++)
    {
        tab2[a]=tab[i];
        a++;
    }
    b = 0;
    for (i=0; i<a; i++)
    {
        b += tab2[i];
    }
    b = b/(maxi-(mini-1));
    printf("La moyenne de pouls de votre plage def est de %.2f", b);
}
