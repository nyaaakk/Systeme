#include "lib_pendu.h"

void creer_mot_vide(char* mot_vide, int taille){//fonctionnel

    for(int i = 0; i < taille; i++){//on remplit le mot avec des tirets
        mot_vide[i] = '-';
    }
    mot_vide[taille] = '\0';//on ferme la chaine
}
