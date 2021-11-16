#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void afficher_une_chaine(char** p, int n){
    printf("la chaine de rang %d est : %s\n", n, *(p + n));
}

void afficher_chaine(char** p, int n){
    for(int i = 0; i < n; i++){
        printf("%s ", *(p + i));
    }
    printf("\n");
}

int main(void){
    int n, m;
    char **p;
    printf("entrer le nombre de chaines\n");
    if(scanf("%d", &n) != 1){
        printf("erreur de saisie\n");
        return 1;
    }

    p = malloc(n * sizeof(char*));
    if(p == NULL){
        printf("erreur malloc\n");
        return 1;
    }
    for(int i = 0; i < n; i++){
        *(p + i) = malloc(MAX_SIZE * sizeof(char));
        if(*p == NULL){
            printf("erreur malloc\n");
            return 1;
        }
    }

    for(int i = 0; i < n; i++){
        printf("[%d] > : ", i);
        if(scanf(" %s", *(p + i)) != 1){
            printf("erreur de saisie\n");
            return 1;
        }
        printf("\n");
    }

//    printf("entrer le numero du mot a afficher :\n");
//    if(scanf("%d", &m) != 1){
//        printf("erreur de saisie\n");
//        return 1;
//    }

    afficher_chaine(p, n);

    for(int i = 0; i < n; i++){
        free(*(p + i));
    }
    free(p);
    p = NULL;
    return 1;
}
