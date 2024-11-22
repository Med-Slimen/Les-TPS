#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Qmax 10
/*
void remplir(char qcm[Qmax][5][99],int n){
    int i, j;
    for (i=0;i<n;i++) {
        for (j=0;j<5;j++) {
            if (j==0) {
                printf("Donner la question num %d: ",i+1);
                scanf(" %[^\n]", qcm[i][j]);
            } else {
                printf("Donner la %d reponse: ",j);
                scanf(" %[^\n]", qcm[i][j]);
            }
        }
    }
}
void saisir(int *n,int max){
    do{
        printf("donner n : ");
        scanf("%d",n);
    }
    while(*n<0 ||*n>max);


}
void affiche(char qcm[Qmax][5][99],int n){
    int i,j;
    printf("\n Affichage du QCM \n");
    for (i=0;i<n;i++) {
            for(j=0;j<5;j++){
                if(j==0){
                    printf("La question num %d : %s | ",i+1,qcm[i][j]);
                }
                else{
                    printf("Reponse %d : %s | ",j,qcm[i][j]);
                }
            }
            printf("\n");
    }

}
void remplir2(int qcmcr[Qmax],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Donner la reponse juste de question %d : ",i+1);
        scanf("%d",&qcmcr[i]);
    }
}
void remplir3(char qcm[Qmax][5][99],int reponse[Qmax],int n){
    int i,j,rep;
    for (i=0;i<n;i++) {
            printf("Question N%d : \n",i+1);
            printf("%s \n",qcm[i][0]);
            for(j=1;j<5;j++){
                printf("%d.\t %s \n",j,qcm[i][j]);
            }
            do{
                printf("votre reponse : ");
                scanf("%d",&rep);
            }
            while(rep<1 || rep>4);
            reponse[i]=rep;
        }

}
void juste(int qcmcr[Qmax],int reponse[Qmax],int n){
    int i,j,s;
    s=0;
    for(i=0;i<n;i++){
        if (qcmcr[i]==reponse[i]){
            s++;
        }
    }
    printf("reponse juste : %d ",s);

}
void main(){
    int n,i,j;
    char qcm[Qmax][5][99];
    int qcmcr[Qmax];
    int reponse[Qmax];
    saisir(&n,Qmax);
    remplir(qcm,n);
    //affiche(qcm,n);
    remplir2(qcmcr,n);
    remplir3(qcm,reponse,n);
    juste(qcmcr,reponse,n);
}*/
