#ifndef MUSIQUE_H
#define MUSIQUE_H

#define MAX_NOM 50
#define MAX_CHANSONS 100

typedef struct
{
    char titre[MAX_NOM];
    char auteur[MAX_NOM];
    unsigned int duree;
} Chanson;

// prototype, déclaration
void ajouterChanson(Chanson playlist[MAX_CHANSONS],int *n);

void afficherPlaylist(Chanson playlist[MAX_CHANSONS], int n);

void initChanson(Chanson *c);

#endif
