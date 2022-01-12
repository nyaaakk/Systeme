#include "lib_pendu.h"

int nombre_random(void){//fonctionnel
    int nb;
    srand(time(NULL));//initialisation de la seed
    nb = rand() % NB_MAX;//calcul d un nombre random entre 0 et NB_MAX - 1
    return nb;
}
