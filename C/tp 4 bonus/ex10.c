#include <stdio.h>
#include <stdlib.h>
/*
void affiche(int t[50],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d | ",t[i]);
    }

}
int mini(int t[50],int n){
    int i,min;
    min=t[0];
    for(i=1;i<n;i++){
        if(t[i]<min){
            min=t[i];
        }
    }
    return min;

}
int maxx(int t[50],int n){
    int i,max;
    max=t[0];
    for(i=1;i<n;i++){
        if(t[i]>max){
            max=t[i];
        }
    }
    return max;

}
int found(int t[50],int n,int e){
    int i,f;
    i=0;
    f=-1;
    while(i<n && f==-1){
        if(t[i]==e){
            f=i;
        }
        i++;
    }
    return f;

}
void supprimer(int t[50],int n,int s){
    int i,x;
    if(found(t,n,s)!=-1){
        printf("sdfsdf \n");
        x=found(t,n,s);
        printf("%d \n",x);
        for(i=x;i<n;i++){
            t[i]=t[i+1];
        }
        n=n-1;
        printf("l element %d est supprimé ! \n",s);
        affiche(t,n);
    }
    else{
        printf("l element %d n existe pas dans le tableau \n",s);
    }


}
void menu(int t[50],int n){
    int i,j,cc,e,s;
    printf("\nChose : \n");
    printf("1 : Affichage du tableau\n");
    printf("2 : Rechercher l’élément minimum\n");
    printf("3 : Afficher l’élément maximum\n");
    printf("4 : Rechercher un élément\n");
    printf("5 : Supprimer un élément\n");
    printf("6 : Quitter le programme\n");
    scanf("%d",&cc);
    switch(cc){
        case 1:affiche(t,n);menu(t,n);break;
        case 2:printf("l element min du tableau t est : %d \n",mini(t,n));menu(t,n);break;
        case 3:printf("l element max du tableau t est : %d \n",maxx(t,n));menu(t,n);break;
        case 4:printf("donner l element : ");scanf("%d",&e);
        if(found(t,n,e)!=-1){
            printf("l element %d existe dans le tableau t \n",e);menu(t,n);
        }
        else{
            printf("l element %d n'existe pas dans le tableau t \n",e);menu(t,n);
        }
        break;
        case 5:printf("donner l element : ");scanf("%d",&s);supprimer(t,n,s);menu(t,n);break;
        default:break;

    }

}
int main()
{
    int t[50],n,i;
    printf("donner n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf(" t[%d] = ",i);
        scanf("%d",&t[i]);
    }
    menu(t,n);
}
*/
