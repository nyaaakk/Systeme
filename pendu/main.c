#include "lib_pendu.h"

int main(){

    char* mot = mot_random();//contient le mot a deviner
    int taille = strlen(mot);//nombre de lettre a deviner
    char* mot_vide = malloc( taille+1 * sizeof(char) );//on reserve la place pour un mot vide + carac de fin de chaine
    char c;//carac propose par le joueur
    int erreur = 0;//nombre d erreurs possible max 10
    creer_mot_vide(mot_vide, taille);

    while( !verif_victoire(mot_vide) && !verif_defaite(erreur) ){
        printf("%s\n", mot_vide);
        affichage_pendu(erreur);

        printf("entrer une lettre a tester: ");
        if(!entrer_lettre(&c)){
            printf("erreur de saisie\n");
            return 1;
        }

        erreur = remplacer_mot(c, mot, mot_vide, erreur);
        system("cls");
    }

    printf("%s\n", mot_vide);
    affichage_pendu(erreur);
    if(verif_defaite(erreur)){
        printf("perdu !\n");
        printf("le mot etait: %s !\n", mot);
    }
    else
        printf("gagne !\n");

    free(mot_vide);

    /*
    char c;
    printf("entrer un caractere: \n");
    if(entrer_lettre(&c))
        printf("%c\n", c);
    else
        printf("erreur !\n");
    */
    return 0;
}
