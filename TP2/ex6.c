#include <stdio.h>
#include <stdlib.h>

int main(){
    int bissextille,an;
    printf("Entrer une annee \n");
    scanf("%d",&an);
    bissextille=(an % 4 == 0 && !(an % 100 == 0) || (an % 400 == 0));
    printf("le valeur de bissextil est %d \n",bissextille);
    return 0;
}
//elle retourne un boolean ( 0 ou 1 )
