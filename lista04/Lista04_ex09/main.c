#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],vet1[10];
    for(int i=0;i<10;i++){
        printf("informe valarores:");
        scanf("%d",&vet[i]);
        if(vet[i]<0){
        vet[i]=0;
        }
    }
    for(int i=0;i<10;i++){
        printf("[%d]",vet[i]);
    }

    return 0;
}
