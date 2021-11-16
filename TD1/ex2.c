#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int x;
    int y;
    int z;
}
coordonnees;

void initialise(coordonnees* c){
    (*c).x = 10;
    (*c).y = 5;
    (*c).z = 2;
}

void affichage(coordonnees* c){
    printf("----------\n");
    printf("x = %d\n", (*c).x);
    printf("y = %d\n", (*c).y);
    printf("z = %d\n", (*c).z);
    printf("----------\n");
}

void additionne(coordonnees* c){
    printf("%d + ", (*c).z);
    (*c).z = (*c).z + (*c).y;
    printf("%d = %d\n", (*c).y, (*c).z);
}
void multiplication(coordonnees* c){
    (*c).z = (*c).x * (*c).y;
    printf("%d * %d = %d\n", (*c).x, (*c).y, (*c).z);
}

int main(void){
    coordonnees c;

    initialise(&c);
    affichage(&c);
    multiplication(&c);
    affichage(&c);
    additionne(&c);
    affichage(&c);

    return 0;
}
