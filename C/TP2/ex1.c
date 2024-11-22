#include <stdio.h>

int main()
{
    int a,b;
    printf("donner a :");
    scanf("%i",&a);
    printf("donner b :");
    scanf("%i",&b);
    if(a==b){
        printf("a egale b");
    }
    else if(a<b){
        printf("a est inferieure a b");
    }
    else{
        printf("a est superieure a b");
    }
}
