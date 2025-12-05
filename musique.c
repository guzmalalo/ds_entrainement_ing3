#include "musique.h"
#include <stdio.h>

// définition
void ajouterChanson(Chanson playlist[MAX_CHANSONS],int* n)
{
    Chanson temp;
    if (*n==MAX_CHANSONS)
    {
        printf("La liste est pleine ");
        return;
    }

    initChanson(&temp);

    playlist[*n] = temp;
    (*n)++;

}

void afficherPlaylist(Chanson playlist[MAX_CHANSONS], int n)
{
    int dureeTotal = 0;
    // verification si liste vide
    if (!n)
    {
        printf(" La liste est vide");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf(" Titre  %s  \n", playlist[i].titre);
        printf(" Auteur %s  \n", playlist[i].auteur);
        printf(" Durée  %d  \n", playlist[i].duree);
        printf("\n");

        dureeTotal += playlist[i].duree;
    }

    printf("Nombre total de chansons : %d" , n);
    printf("Durée totale de la playlist : %d" , dureeTotal);
}

void initChanson(Chanson *c)
{

    printf("Titre : ");
    fgets(c->titre, MAX_NOM, stdin);
    printf("Auteur : ");
    scanf("%s",c->auteur); // un seul mot
    //fgets(temp.auteur, MAX_NOM, stdin);
    printf("Durée");
    scanf("%d", &(c->duree));
}