//Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
//quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],soma=0,negativos=0;
    int i=0;
    while (i<10){
        printf("informe um valor:");
        scanf("%d",&vet[i]);
        if(vet[i]>=0){
            soma+=vet[i];
        }else{negativos++;}
        i++;

    }
    printf("soma dos positivos: %d\nquantidade de negativos: %d",soma,negativos);
    return 0;
}
