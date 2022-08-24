/*Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/
#include <stdio.h>
#include <stdlib.h>
void lerVetor(int vet[],int x);
int main()
{
    int TAM=12;
    int vet[TAM],x,y,SOMA=0;
    lerVetor(vet,TAM);
    printf("informe duas posicoes do vetor em um inervalo entre 0 e %d:",TAM);
    scanf("%d %d",&x,&y);
    for(int i=0;i<TAM;i++){
        if(vet[i]==x||vet[i]==y){
            SOMA+=vet[i];
        }
    }
    printf("soma=%d",SOMA);


    return 0;
}
void lerVetor(int vet[], int x){

    for(int i=0;i<x;i++){
        printf("informe valor para o vetor na posicao %d:",i);
        scanf("%d",&vet[i]);
    }
}
