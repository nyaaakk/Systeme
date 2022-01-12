#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#ifndef NB_MAX
#define NB_MAX 11
#endif // NB_MAX

#ifndef MAX_SIZE
#define MAX_SIZE 20
#endif // MAX_SIZE

void affichage_pendu(int);

char* mot_random(void);

bool comparer_caractere(char, char*);

int remplacer_mot(char, char*, char*, int);

void creer_mot_vide(char*, int);

bool verif_victoire(char*);

bool verif_defaite(int);

bool entrer_lettre(char*);
