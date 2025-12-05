#include <stdio.h>
#include "musique.h"

int main()
{
    Chanson playlist[MAX_CHANSONS]={0};
    int nbChansons =0; // taille logique

    ajouterChanson(playlist, &nbChansons);
    ajouterChanson(playlist, &nbChansons);

    afficherPlaylist(playlist, nbChansons);

}