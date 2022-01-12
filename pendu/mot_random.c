#include "lib_pendu.h"

char* mot_random(void){//fonctionnel
    FILE* fichier;
    fichier = fopen("reserve.txt", "r");

    srand(time(NULL));//initialisation de la seed
    int n = rand() % NB_MAX;//calcul d un nombre random entre 0 et NB_MAX - 1

    char* mot = malloc(MAX_SIZE * sizeof(char));

    for(int i = 0; i <= n; i++){//on stock tour a tour chaque lignes dans mot
        fgets(mot, MAX_SIZE, fichier);//jusqu a la ligne n
    }//a la fin de la boucle la variable contient bien le mot de la ligne n

    mot[strlen(mot)-1] = '\0';//on enleve le caractere de retour a la ligne et on ferme la chaine

    fclose(fichier);
    return mot;
}
