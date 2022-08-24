/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <stdlib.h>
void imprimeVetor(int vet[],int TAM);
void lerVetor(int vet[],int TAM);
int main()
{
    int TAM=10,vet1[TAM],vet2[TAM];
    lerVetor(vet1,TAM);
    for(int i=0;i<TAM;i++){
        vet2[i]=vet1[i]*vet1[i];
    }
    imprimeVetor(vet1,TAM);
    printf("\n");
    imprimeVetor(vet2,TAM);
    return 0;
}
void imprimeVetor(int vet[],int TAM) {

    for(int i=0;i<TAM;i++){
        printf("[%d]",vet[i]);
    }
}
void lerVetor(int vet[], int TAM){

    for(int i=0;i<TAM;i++){
        printf("informe valor para o vetor na posicao %d:",i);
        scanf("%d",&vet[i]);
    }
}
