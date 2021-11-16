#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficher_point(int **p, int row, int col){
    printf("le point aux coordonnees (%d,%d) est :", col, row);
    col--;
    row--;
    printf("| %2d |\n", *( *(p + col) + row));
}

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
    int row, col;
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
    }

    printf("matrice non initialise :\n");
    afficher_matrice(p, row, col);
    remplir_matrice_random(p, row, col);
    printf("tableau initailise avec valeur random :\n");
    afficher_matrice(p, row, col);

    afficher_point(p, 1, 1);

    for(int i = 0; i < row; i++)
        free(*(p + i));
    free(p);
    p = NULL;
    return 0;
}
