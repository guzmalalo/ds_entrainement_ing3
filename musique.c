#include "musique.h"
#include <stdio.h>
#include <string.h>

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
        printf("Chanson %d :\n",i+1);
        printf(" Titre  %s  \n", playlist[i].titre);
        printf(" Auteur %s  \n", playlist[i].auteur);
        printf(" Durée  %d  \n", playlist[i].duree);
        printf("\n");

        dureeTotal += playlist[i].duree;
    }

    printf("Nombre total de chansons : %d\n" , n);
    printf("Durée totale de la playlist : %d" , dureeTotal);
}

void initChanson(Chanson *c)
{
    char buffer[100];

    printf("\nTitre : ");
    fgets(c->titre, MAX_NOM, stdin);

    int i = strlen(c->titre);
    c->titre[i-1]= '\0';  // on transforme le \n en \0

    printf("Auteur : ");
    scanf("%s",c->auteur); // un seul mot

    printf("Durée : ");
    scanf(" %d", &(c->duree));

    fgets(buffer, 100, stdin); // on vide le stdin

}