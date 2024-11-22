#include <stdio.h>
void main(){
    char ch;
    printf("donner ch :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("majuscule");
    }
    else if(ch>='a' && ch<='z'){
        printf("minuscule");
    }
    else if(ch>='0' && ch<='9'){
        printf("chiffre");
    }
    else {
        printf("charactere special");
    }
}
