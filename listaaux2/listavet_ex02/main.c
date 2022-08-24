/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[6];
   for(int i=0;i<6;i++){
    printf("informe um valor:");
    scanf("%d",&vet[i]);
   }
   for(int i=0;i<6;i++){
    printf("[%d]",vet[i]);
   }
    return 0;
}
