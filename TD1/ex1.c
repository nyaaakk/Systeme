#include <stdio.h>

void afficher(int *x, int* y, int *z){
    printf("---------\n");
    printf("x = %d\n", *x);
    printf("y = %d\n", *y);
    printf("z = %d\n", *z);
    printf("---------\n");
}

void plus(int *x, int *y, int *z){
    *z = *x + *y;
    printf("%d + %d = %d\n", *x, *y, *z);
}

void moins(int *x, int *y, int *z){
    *z = *x - *y;
    printf("%d - %d = %d\n", *x, *y, *z);
}

void fois(int *x, int *y, int *z){
    *z = *x * *y;
    printf("%d * %d = %d\n", *x, *y, *z);
}

int main(void){
    int x, y, z;
    printf("entrer deux entiers\n");
    if(scanf("%d%d", &x, &y) != 2){
        printf("erreur de saisie\n");
        return 1;
    }

    afficher(&x, &y, &z);
    plus(&x, &y, &z);
    afficher(&x, &y, &z);
    moins(&x, &y, &z);
    afficher(&x, &y, &z);
    fois(&x, &y, &z);
    afficher(&x, &y, &z);

    return 0;
}
