#include "lib_pendu.h"

void affichage_pendu(int erreur){//fonctionnel
    switch (erreur){//un etat d affichage par nombre d erreur du joueur
        case 0 : printf("\n\n\n\n\n\n\n"); break;
        case 1 : printf("\n\n\n\n\n\n\n|\\______"); break;
        case 2 : printf("\n|\n|\n|\n|\n|\n|\n|\\______"); break;
        case 3 : printf("______\n|\n|\n|\n|\n|\n|\n|\\______"); break;
        case 4 : printf("______\n|    |\n|\n|\n|\n|\n|\n|\\______"); break;
        case 5 : printf("______\n|/   |\n|\n|\n|\n|\n|\n|\\______"); break;
        case 6 : printf("______\n|/   |\n|    0\n|\n|\n|\n|\n|\\______"); break;
        case 7 : printf("______\n|/   |\n|    0\n|    I\n|\n|\n|\n|\\______"); break;
        case 8 : printf("______\n|/   |\n|    0\n|    I\n|   /\n|\n|\n|\\______"); break;
        case 9 : printf("______\n|/   |\n|    0\n|    I\n|   / \\\n|\n|\n|\\______"); break;
        case 10 : printf("______\n|/   |\n|   _0_\n|    I\n|   / \\\n|\n|\n|\\______"); break;
        default : printf("erreur affichage pendu\n"); break;
    }
    printf("\n\n\n");
}
