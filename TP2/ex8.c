#include <stdio.h>
#include <stdlib.h>
int main(){
    int j,mm,an,rs;
    printf("donner les jours : ");
    scanf("%i",&j);
    printf("donner le mois : ");
    scanf("%i",&mm);
    printf("donner l'annee : ");
    scanf("%i",&an);
    if(mm==2){
        if((an % 4 == 0) && !(an % 100 == 0) || (an % 400 == 0)){
            rs=28;
        }
        else{
            rs=29;
        }
    }
    else if(mm<=7){
        rs=(mm % 2==1 ? 31:30);
    }
    else{
        rs=(mm % 2 ==0 ? 31:30);
    }
    if(mm==12 && j==rs){
        mm=1;
        j=1;
        an++;
    }
    else if(j==rs){
        mm++;
        j=1;
    }
    else{
        j++;
    }
    printf("la date du lendemain est %i/%i/%i ",j,mm,an);



}
