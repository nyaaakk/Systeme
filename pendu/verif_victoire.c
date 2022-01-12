#include "lib_pendu.h"

bool verif_victoire(char* mot_vide){
    bool res = true;

    for(int i = 0; i < strlen(mot_vide); i++){
        if(mot_vide[i] == '-')
            res = false;
    }

    return res;//renvoie true si le mot est complet false sinon
}
