#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    int n = fork();
    if(n == 0){
        printf("racine : %d\n", getppid());
        printf("pere : %d\n", getpid());
        n = fork();
        if(n == 0){
            printf("fils1 : %d\n", getpid());
            printf("1 e affichage pere : %d\n", getppid());
            n = fork();
            if(n == 0){
                printf("fils2-1 : %d\n", getpid());
                printf("2 e affichage pere : %d\n", getppid());
            }
            else if(n > 0){
                n = fork();
                if(n == 0){
                    printf("fils2-2 : %d\n", getpid());
                    printf("3 e affichage pere : %d\n", getppid());
                    n = fork();
                    if(n == 0){
                        printf("fils3 : %d\n", getpid());
                        printf("4 e affichage pere : %d\n", getppid());
                    }
                    else if(n < 0)
                        printf("erreur\n");
                }
                else if(n < 0)
                    printf("erreur\n");
            }
            else
                printf("erreur\n");
        }
        else if(n < 0)
            printf("erreur\n");
    }
    else if(n < 0)
        printf("erreur\n");        
    
    return 0;
}
