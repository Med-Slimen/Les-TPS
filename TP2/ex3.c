#include <stdio.h>

void main(){
    int an;
    printf("donner un entier positive : ");
    scanf("%i",&an);
    if(an<0){
        printf("Tu dois enter un entier positive !! \n");
        main();
    }
    else{
        if(an%4==0 && an%100!=0 || an%400==0){
            printf("%i est une ann�es bissextille",an);
        }
        else{
            printf("%i n est pas une ann�es bissextille ",an);
        }


    }
}

