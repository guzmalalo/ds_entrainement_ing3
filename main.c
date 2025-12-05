#include <stdio.h>
#include "musique.h"

int main()
{
    Chanson playlist[MAX_CHANSONS]={0};
    int nbChansons =0; // taille logique

    char test[10];
    fgets(test, 10, stdin);

    printf("%s", test);

}