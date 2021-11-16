#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficher_tableau(int *p, int n){
    for(int i = 0; i < n; i++)
        printf("tab[%d] = %d\n",i,*(p + i));
}

void remplir_tableau_random(int *p, int n){
    for(int i = 0; i < n; i++)
        *(p + i) = rand() % 101;
}

int main(void){
    int n, m;
    srand(time(NULL));

    printf("entrer la taille du tableau\n");
    if(scanf("%d",&n) != 1){
        printf("erreur de saisie\n");
        return 1;
    }

    int *p = malloc(n * sizeof(int));
    if(p == NULL){
        printf("erreur malloc\n");
        return 1;
    }

    printf("tableau non initialise :\n");
    afficher_tableau(p, n);
    remplir_tableau_random(p, n);
    printf("tableau initailise avec valeur random :\n");
    afficher_tableau(p, n);

    printf("entrer une nouvelle taille de tableau\n");
    if(scanf("%d",&m) != 1){
        printf("erreur de saisie\n");
        return 1;
    }
    p = realloc(p, m * sizeof(int));
    if(p == NULL){
        printf("erreur realloc\n");
        return 1;
    }

    printf("nouveau tableau non initialise\n");
    afficher_tableau(p, m);
    remplir_tableau_random(p+n, m);
    printf("nouveau tableau initialise\n");
    afficher_tableau(p, m);

    free(p);
    p = NULL;
    return 0;
}
