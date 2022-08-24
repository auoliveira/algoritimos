//Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais ˜
//e os escreva na tela.
#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int vet[], int tam);

int main()
{
    //int vet[10],aux1;

    int vet[] = {2, 4, 5, 1, 3, 5, 2, 4};
    int tam = sizeof(vet) / sizeof(int);

    /*
    for (int i=0;i<10;i++){
        printf("informe um valor:");
        scanf("%d",&vet[i]);

    }
    */



    for(int i=0; i<tam;i++) {
        for(int j=0;j<tam;j++) {
            if(vet[i] == vet[j] && i != j) {
                for(int k=j; j<tam-1; j++) {
                    vet[k] = vet[k+1];
                }
                tam--;
                printf("\n vet[%d]=%d: ", i, vet[i]);
                imprimeVetor(vet, tam);
            }
        }
    }

    printf("\nfinal: ");
    imprimeVetor(vet, tam);
    /*

    for(int aux=0;aux<10;aux++){
        for(int i=aux+1;i<10;i++){
            if(vet[aux]==vet[i]){
                printf("[%d]\n",vet[i]);
                }
            }
        }
    */
    return 0;
}

void imprimeVetor(int vet[], int tam) {
    for(int i=0;i<tam;i++) {
        printf("%d ", vet[i]);
    }
}
