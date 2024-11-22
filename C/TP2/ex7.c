#include <stdio.h>
#include <stdlib.h>
int main(){
    int mm,an;
    int rs;
    printf("Entre une anneés \n");
    scanf("%d",&an);
    printf("Entre un mois \n");
    scanf("%d",&mm);
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
    printf("le dernier jour du mois est %d",rs);
    return 0;
}
