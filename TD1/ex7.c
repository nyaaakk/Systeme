#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficher_matrice(int **p, int row, int col){
    for(int i = 0; i < row; i++){
        printf("| ");
        for(int j = 0; j < col; j++)
            printf("%2d | ",*( *(p + j) + i));
        printf("\n");
    }
}

void remplir_matrice_random(int **p, int row, int col){
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            *( *(p + j) + i) = rand() % 101;
}

int main(void){
    int row, col, row2, col2;
    srand(time(NULL));

    printf("entrer la taille de la matrice\n");
    if(scanf("%d%d",&col,&row) != 2){
        printf("erreur de saisie\n");
        return 1;
    }

    int **p = malloc(col * sizeof(int*));
    if(p == NULL){
        printf("erreur malloc\n");
        return 1;
    }
    for(int i = 0; i < col; i++){
        *(p + i) = malloc(row * sizeof(int));
        if(*(p + i) == NULL){
            printf("erreur malloc\n");
            return 1;
        }
    }

    printf("matrice non initialisee :\n");
    afficher_matrice(p, row, col);
    remplir_matrice_random(p, row, col);
    printf("matrice initailisee avec valeur random :\n");
    afficher_matrice(p, row, col);

    printf("entrer la nouvelle taille de la matrice :\n");
    if(scanf("%d%d", &col2, &row2) != 2){
        printf("erreur de saisie\n");
        return 1;
    }
    p = realloc(p, col2 * sizeof(int));
    if(p == NULL){
        printf("erreur realloc\n");
        return 1;
    }
    for(int i = 0; i < col2; i++){
        *(p + i) = realloc(*(p + i), row2 * sizeof(int));
        if(*(p + i) == NULL){
            printf("erreur realloc");
            return 1;
        }
    }

    printf("nouvelle matrice non initialisee :\n");
    afficher_matrice(p, row2, col2);
    remplir_matrice_random(p, row, col);
    printf("nouvelle matrice initailisee avec valeur random :\n");
    afficher_matrice(p, row2, col2);

    for(int i = 0; i < row; i++)
        free(*(p + i));
    free(p);
    p = NULL;
    return 0;
}
