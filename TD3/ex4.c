#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define var 3

int main(void){
    int n = fork();
    int a, b;
    
    if(n == 0){
        sleep(10);
        for(int i = 0; i < var; i++){
            printf("entrer l entier a\n");
            if(scanf("%d", &a) != 1){
                printf("erreur saisie\n");
                return 1;
            }
            printf("[%d] - pid b - %d\n", getpid(), a);
            sleep(5);
        }
    }
    else if(n > 0){
                                n = fork();
                                if(n == 0){
                                    for(int i = 0; i < var; i++){
                                        printf("entrer l entier b\n");
                                        if(scanf("%d", &b) != 1){
                                            printf("erreur saisie\n");
                                            return 1;
                                        }
                                        printf("[%d] - pid b - %d\n", getpid(), b);
                                        sleep(5);
                                    }
                                }
                                else if(n < 0){
                                    printf("erreur fork\n");
                                    return 1;
                                }
    }
    else{
        printf("erreur\n");
        return 1;
    }
    
    waitpid(n, NULL, 0);
    return 0;
}
