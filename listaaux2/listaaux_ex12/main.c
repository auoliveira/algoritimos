//Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
//juntamente com o maior, o menor e a media dos valores#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[5],maior,menor,soma=0,cont=0;
  for(int i=0;i<5;i++){
    printf("informe um valor:");
    scanf("%d",&vet[i]);
    if(i==0){
        maior,menor=vet[i];
    }
    if(maior<vet[i]){
        maior=vet[i];
    }
    if(menor>vet[i]){
        menor=vet[i];
    }
    soma+=vet[i];
    cont++;
  }
  printf("maior:%d\nmenor:%d\nmedia:%d",maior,menor,(soma/cont));
    return 0;
}
