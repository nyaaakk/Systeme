#include "lib_pendu.h"

bool comparer_caractere(char c, char* mot){
    bool res = false;
    for(int i = 0; i < strlen(mot); i++){
        if(c == mot[i])
            res = true;
    }
    return res;
}
