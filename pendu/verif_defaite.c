#include "lib_pendu.h"

bool verif_defaite(int erreur){
    bool res = false;

    if(erreur == 10)
        res = true;

    return res;//renvoie true si erreur == 10 false sinon
}
