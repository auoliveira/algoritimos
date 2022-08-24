/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],maior,menor;
    for(int i=0;i<10;i++){
        printf("infrome um valor:");
        scanf("%d",&vet[i]);
        if(i==0){
        menor,maior=vet[i];
       }
        if(vet[i]>maior){
            maior=vet[i];
        }
        if(vet[i]<menor){
           menor=vet[i];
        }
    }
    printf("maior=%d\nmenor=%d",maior,menor);
    return 0;
}
