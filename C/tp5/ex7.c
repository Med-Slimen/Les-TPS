#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/*
void main()
{
    int n,f,t,x;
    char j;
    srand((unsigned int)time(NULL));
    t=21;
    f=1;
    printf("On a 21 allumettes ! :\n");
    printf("Le jeux a commencer ! : \n");
    while(t>=1){
        if (f==1){
            do{
                printf("Votre tirage : ");
                scanf("%d",&n);
            }
            while(n<1 || n>3);
            j='m';

        }
        else{
            printf("\nL'ordinateur est en train de choisir.....");
            sleep(2);
            n=rand()% 3 + 1;
            j='o';
        }
        f=-f;
        t=t-n;
        printf("\nLe nombre d allumettes restants : %d \n",t);
    }
    if(j=='m'){
        printf("\nTu est le gangant !");
    }
    else{
        printf("\nL'ordinateur est le gagnant !");
    }
}*/
