#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<14;j++){
            if(j<=i && i<=4){
                printf("\033[30m * \033[0m ");
            }
            else if(j>i && i<=2){
                printf("\033[31m * \033[0m ");
            }
            else if(i+j<=8 && i>=5){
                printf("\033[30m * \033[0m ");
            }
            else if(i+j>=7 && i<=5){
                printf("\033[37m * \033[0m ");
            }
            else{
                printf("\033[32m * \033[0m ");
            }
        }
        printf("\n");
    }
}
