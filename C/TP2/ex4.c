#include <stdio.h>
void main(){
    int a,b;
    char op;
    printf("donner a : ");
    scanf("%i",&a);
    printf("donner b : ");
    scanf("%i",&b);
    printf("donner l'operateur : ");
    scanf(" %c",&op);
    if(op=='+'){
        printf("%i + %i = %i",a,b,a+b);
    }
    else if(op=='-'){
        printf("%i - %i = %i",a,b,a-b);
    }
    else if(op=='*'){
        printf("%i * %i = %i",a,b,a*b);
    }
    else if(op=='/'){
        printf("%i + %i = %f",a,b,a/b);
    }
    else{
        printf("operateur invalide");
    }

}
