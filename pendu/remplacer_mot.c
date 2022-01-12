#include "lib_pendu.h"

int remplacer_mot(char c, char* mot, char* mot_vide, int erreur){
    bool test = false;
    bool test2 = false;
    for(int i = 0; i < strlen(mot); i++){
        if( c == mot[i] ){
            mot_vide[i] = c;
            test2 = true;
        }else{
            test = true;
        }
    }

    if(test && !test2)
        erreur++;

    return erreur;
}
