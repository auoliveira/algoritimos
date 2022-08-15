#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20],p=0,imp=0,mc=0,ms=0;
    for(int i=0; i<20; i++){
        printf("informe valor:");
        scanf("%d",&vet[i]);
        if (vet[i]%2==0 ){
            p++;
            }
        if (vet[i]%2!=0){
             imp++;
            }
        if (vet[i]>50){
            mc++;
            }
        if (vet[i]<7){
            ms++;
        }
    }

    printf ("par=%d\nimp=%d\nmaior 50=%d\nmenor 7=%d",p,imp,mc,ms);




    return 0;
}
