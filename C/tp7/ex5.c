#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
typedef struct {
int jour;
int mois;
int annee;
}date;
typedef struct {
char nom[20];
date d;
int nb;
}joueur;
typedef struct {
char nom[20];
joueur j[12];
}equipe;
date remplir_date(int k){
    date d;
    printf("<-- Date de naissance de joueur %d --> \n",k);
    printf("jour : ");
    scanf("%d",&d.jour);
    printf("mois : ");
    scanf("%d",&d.mois);
    printf("annee : ");
    scanf("%d",&d.annee);
    return d;
}
joueur remplir2(int k){
    joueur j;
    printf("donner le nom d jouer N°%d\n",k);
    scanf("%s",j.nom);
    j.d=remplir_date(k);
    printf("\ndonner le nombre de but marqué du joueur N° %d : ",k);
    scanf("%d",&j.nb);
    return j;


}
equipe remplir(int k){
    equipe e;
    printf("donner le nom d equipe N°%d : ",k);
    scanf("%s",e.nom);
    for(int i=0;i<3;i++){
        e.j[i]=remplir2(i+1);
    }
    return e;


}
void affiche(equipe e[3]){
    for(int i=0;i<1;i++){
        printf("<---- Les Information d equipe N°%d\n",i+1);
        printf("Nom d equipe : %s \n",e[i].nom);
        printf("Les joueur : \n");
        for(int j=0;j<3;j++){
            printf("Nom du joueur N°%d : %s\n",j+1,e[i].j[j].nom);
            printf("Date du joueur N°%d : %d/%d/%d \n",j+1,e[i].j[j].d.jour,e[i].j[j].d.mois,e[i].j[j].d.annee);
            printf("Nombre de but marqué : %d \n",e[i].j[j].nb);
        }
    }

}
int recherche(equipe e[3],char nom[50]){
    int p=-1,i=0;
    do{
        if(strcmp(e[i].nom,nom)==0){
            p=i;
        }
        i++;
    }
    while(p==-1 && i<3);
    return p;
}
void vieux(equipe e[3]){
    int i,j,max,test;
    char p[20];
    max=((2024-e[0].j[0].d.annee)*365)+(e[0].j[0].d.mois*30)+e[0].j[0].d.jour;
    printf("%d\n",max);
    strcpy(p,e[0].j[0].nom);
    for(i=0;i<1;i++){
        for(j=0;j<3;j++){
            test=((2024-e[i].j[j].d.annee)*365)+(e[i].j[j].d.mois*30)+e[i].j[j].d.jour;
            printf("%d\n",test);
            if(test<max){
                max=test;
                printf("noveua max %d\n",max);
                strcpy(p,e[i].j[j].nom);
            }
        }
    }
    printf("\nle joueur le plus vieux est %s",p);

}
void main()
{
    equipe e[3];
    char nom[50];
    char jr[50];
    int i,s,x,j,max;
    for(i=0;i<1;i++){
        e[i]=remplir(i+1);
    }
    affiche(e);
    printf("donner le nom d equipe : ");
    scanf("%s",nom);
    if(recherche(e,nom)!=-1){
        s=0;
        x=recherche(e,nom);
        for(i=0;i<3;i++){
            s=s+e[x].j[i].nb;
        }
        printf("\nLe nombre de but marqué pour l equipe %s est %d",nom,s);
    }
    else{
        printf("pas de equipe avec ce nom !");
    }

    printf("\nTrouver le butteur d equipe : ");
    scanf("%s",jr);
    if(recherche(e,jr)!=-1){
        s=0;
        x=recherche(e,nom);
        max=e[x].j[0].nb;
        j=0;
        for(i=0;i<3;i++){
            if(e[x].j[i].nb>max){
                max=e[x].j[i].nb;
                j=i;
            }
        }
        printf("le butteur de equipe %s est le joueur %s",e[x].nom,e[x].j[j].nom);
    }
    else{
        printf("pas de equipe avec ce nom !");
    }
    vieux(e);
}
*/
