#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define var 20

int main(void){
    int n = fork();    
    if(n == 0){
        for(int i = 0; i < var; i++){
            printf("[%d] - pid 1\n", getpid());
            sleep(1);
        }
    }
    else if(n > 0){
        n = fork();
        if(n == 0){
            for(int j = 0; j < var; j++){
                printf("[%d] - pid 2\n", getpid());
                sleep(1);
            }
        }
        //else if(n > 0)
            //cas pere
        else{
            printf("erreur fork\n");
            return 1;
        }
    }
    else{
        printf("erreur fork\n");
        return 1;
    }
    
    return 0;
}
