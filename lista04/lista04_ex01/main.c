#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10],vet2[10];
    int soma;
    for(int i=0; i<10; i++){
        printf("informe valor vet1:");
        scanf("%d",&vet1[i]);
    } for(int i=0; i<10; i++){
        printf("informe valor vet2:");
        scanf("%d",&vet2[i]);
    } for(int i=0; i<10; i++){
    printf("%d\n",vet1[i]+vet2[i]);

    }

    return 0;
}
