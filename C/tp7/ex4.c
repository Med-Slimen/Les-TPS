#include <stdio.h>
#include <stdlib.h>
/*
typedef struct {
char nom[20];
char prenom[30];
int date;
int mat[20];
}etudiant;
typedef struct {
int nbe;
int nbm;
int coef[20];
etudiant t[20];
}classe;
etudiant remplir(int i,int x){
    etudiant e;
    int j;
    printf("donner le nom d etudiant N°%d \n",i);
    scanf("%s",e.nom);
    printf("donner le prenom d etudiant N°%d \n",i);
    scanf("%s",e.prenom);
    printf("donner la date d etudiant N°%d \n",i);
    scanf("%d",&e.date);
    printf("remplir les note d etudiant N°%d \n",i);
    for(j=0;j<x;j++){
        printf("donner le note de la matiere %d d'etudiant N°%d \n",j+1,i);
        scanf("%d",&e.mat[j]);
    }
    return e;

}
void affiche(classe c){
    int i,k,m;
    printf("le nombre d etudiant : %d \n",c.nbe);
    printf("le nombre de matiere : %d \n",c.nbm);
    for(i=0;i<c.nbm;i++){
        printf("la coef de matiere N°%d : %d \n",i+1,c.coef[i]);
    }
    printf("\nLes Etudiants : \n\n");
    for(i=0;i<c.nbe;i++){
        printf("Les information du etudiant N°%d \n",i+1);
        printf("le nom : %s \n",c.t[i].nom);
        printf("le prenom : %s \n",c.t[i].prenom);
        printf("la date : %d \n",c.t[i].date);
        printf("Les notes : \n");
        for(m=0;m<c.nbm;m++){
                printf("%d | ",c.t[i].mat[m]);
            }
        printf("\n");
    }

}
void moyenne(classe c){
    int i,j;
    float x;
    for(i=0;i<c.nbe;i++){
        x=0;
        for(j=0;j<c.nbm;j++){
            x=x+(c.t[i].mat[j]*c.coef[j]);
        }
        x=x/c.nbm;
        printf("La moyenne d etudiant N°%d : %f",i,x);
    }

}
void main()
{
    int i,n;
    etudiant e;
    classe c;
    printf("donner nombre d etudiant : ");
    scanf("%d",&c.nbe);
    printf("donner le nombre de matiere : ");
    scanf("%d",&c.nbm);
    for(i=0;i<c.nbm;i++){
        printf("donner la coef de matiere N° %d : \n",i+1);
        scanf("%d",&c.coef[i]);
    }
    for(i=0;i<c.nbe;i++){
        c.t[i]=remplir(i+1,c.nbm);
    }
    affiche(c);
    moyenne(c);



}*/
