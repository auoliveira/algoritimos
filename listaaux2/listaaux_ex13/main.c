//Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
//tram o maior e o menor valor
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],pm=0,pn=0,aux,aux1;
    for(int i=0;i<10;i++){
        printf("informe um numero:");
        scanf("%d",&vet[i]);
        }
        aux,aux1=vet[0];
    for(int i=0;i<10;i++){
        if(vet[i]>aux){
            aux=vet[i];
            pm=i;
        }
        if(vet[i]<aux1){
            aux1=vet[i];
            pn=i;
        }
    }

    printf("posicao do maior:%d\nposicao do menor:%d",pm,pn);
    return 0;
}
