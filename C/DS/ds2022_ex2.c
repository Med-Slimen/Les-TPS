#include <stdio.h>
#include <stdlib.h>
#include<time.h>
typedef int grille[50][50];
void saisir(int *n,char ch[50]){
    do{
        printf(ch);
        scanf("%d",n);
    }
    while(*n>50);
}
void initi(grille m,int nbc,int nbl){
    int i,j;
    for(i=0;i<nbl;i++){
        for(j=0;j<nbc;j++){
            m[i][j]=0;
        }
    }
}
void remplir(grille e,int nbc,int nbl){
    int i,j;
    for(i=0;i<nbl;i++){
        for(j=0;j<nbc;j++){
            do{
                printf("e[%d,%d] = ",i,j);
                scanf("%d",&e[i][j]);
            }
            while(e[i][j]<0 || e[i][j]>9);

        }
    }


}
void ajout(grille m,int nbc,int nbl){
    int i,j,s,f;
    s=0;
    f=(nbc*nbl)/4;
    srand(time(NULL));
    do{
        i=rand()%(nbl-1-0+1)+0;
        j=rand()%(nbc-1-0+1)+0;
        if(m[i][j]!=9){
            m[i][j]=9;
            s++;
        }
    }
    while(s!=f);
}
void mise(grille m,int nbc,int nbl){
    int i,j,s;
    for(i=0;i<nbl;i++){
        for(j=0;j<nbc;j++){
            if(m[i][j]!=9){
                s=0;
                if(i==0 && j<nbc-1){
                    if(m[i][j+1]==9){
                        s++;
                    }
                    if(m[i-1][j]==9){
                        s++;
                    }
                    m[i][j]=s;
                }
                else if(j==nbc-1 && i<nbl-1){
                   if(m[i][j-1]==9){
                        s++;
                    }
                    if(m[i-1][j]==9){
                        s++;
                    }
                    m[i][j]=s;
                }
                else if(i==nbl-1 && j!=0){
                   if(m[i+1][j]==9){
                        s++;
                    }
                    if(m[i][j-1]==9){
                        s++;
                    }
                    m[i][j]=s;
                }
                else if(j==0 && i>0){
                   if(m[i][j+1]==9){
                        s++;
                    }
                    if(m[i+1][j]==9){
                        s++;
                    }
                    m[i][j]=s;
                }
                else{
                    if(m[i-1][j]==9){
                        s++;
                    }
                    if(m[i][j+1]==9){
                        s++;
                    }
                    if(m[i][j-1]==9){
                        s++;
                    }
                    if(m[i+1][j]==9){
                        s++;
                    }
                    m[i][j]=s;
                }
            }
        }
    }
}
void affiche1(grille m,int nbc,int nbl){
    int i,j;
    for(i=0;i<nbl;i++){
        for(j=0;j<nbc;j++){
            printf("%d | ",m[i][j]);
        }
        printf("\n");
    }


}
void affiche(grille m,grille e,int nbc,int nbl){
    int i,j,s;
    s=0;
    for(i=0;i<nbl;i++){
        for(j=0;j<nbc;j++){
            if(m[i][j]==9 && e[i][j]==9 ){
                s++;
            }
        }
    }
    if(s!=(nbc*nbl)/4){
        printf("Le nombre des bombes bien placés est égal à %d!=%d donc ce joueur n’as pas gagné ce jeu.",s,(nbc*nbl)/4);
    }
    else{
        printf("le jouer a gangné le jeu !");
    }

}
int main()
{
    grille m,e;
    int nbc,nbl;
    saisir(&nbl,"donner nbl : ");
    saisir(&nbc,"donner nbc : ");
    initi(m,nbc,nbl);
    ajout(m,nbc,nbl);
    mise(m,nbc,nbl);
    affiche1(m,nbc,nbl);
    remplir(e,nbc,nbl);
    affiche(m,e,nbc,nbl);
    affiche1(e,nbc,nbl);

}
