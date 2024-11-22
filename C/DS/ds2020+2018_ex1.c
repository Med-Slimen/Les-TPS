/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main()
{
    srand(time(0));
    int r[5][4],i,j,sp,max;
    int s[5];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            r[i][j]=rand()%(6)+1;
        }
    }
    printf("\nvoici le matrice \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d | ",r[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        sp=0;
        for(j=0;j<4;j++){
            sp+=r[i][j];
        }
        s[i]=sp;
    }
    printf("\nvoici le tableau du score \n\n");
    for(i=0;i<5;i++){
        printf("%d | ",s[i]);
    }
    printf("\n\nle(s) joueur(s) gagnant(s) : \n\n");
    max=s[0];
    for(i=1;i<5;i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    for(i=0;i<5;i++){
        if(s[i]==max){
            printf("l indice de jouer gagnant est : %d \n ",i);
        }
    }



}*/
