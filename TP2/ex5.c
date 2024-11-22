#include <stdio.h>

void main(){
    int a;
    printf("donner un entier ");
    scanf("%i",&a);
    switch(a){
        case 1:printf("violet");break;
        case 2:printf("Indigo");break;
        case 3:printf("Bleu");break;
        case 4:printf("Vert");break;
        case 5:printf("Jeune");break;
        case 6:printf("Orange");break;
        case 7:printf("Rouge");break;
        default:printf("error");break;
    }
}
