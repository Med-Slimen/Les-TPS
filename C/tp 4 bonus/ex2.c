#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int t[50],tpos[50],tneg[50];
    int i,j,n,max,min,m1,m2,aux,s,p,neg;
    printf("donner n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf(" t[%d] = ",i);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++){
        printf("%d | ",t[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        s+=t[i];
    }
    printf("\nla somme est : %d",s);
    max=t[0];
    min=t[0];
    m1=0;
    m2=0;
    for(i=1;i<n;i++){
        if(t[i]>max){
            max=t[i];
            m1=i;
        }
        if(t[i]<min){
            min=t[i];
            m2=i;
        }
    }
    printf("\nle max est : %d avec la position : %d \nle min est : %d avec la position : %d",max,m1,min,m2);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            aux=t[i];
            t[i]=t[j];
            t[j]=aux;
        }
    }
    printf("\nLe tabelaux apres l inverse : \n");
    for(i=0;i<n;i++){
        printf("%d | ",t[i]);
    }
    p=-1;
    neg=-1;
    for(i=0;i<n;i++){
        if(t[i]>0){
            p++;
            tpos[p]=t[i];
        }
        else{
            neg++;
            tneg[neg]=t[i];
        }
    }
    printf("\nle tableau avec les entiers positives : \n");
    for(i=0;i<=p;i++){
        printf("%d | ",tpos[i]);
    }
    printf("\nlet tableau avec les entiers negatives : \n");
    for(i=0;i<=neg;i++){
        printf("%d | ",tneg[i]);
    }

}*/
