//Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
//mentos repetidos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],aux;
    int tam = sizeof(vet) / sizeof(int);
    for(int i=0; i<tam;i++){
        printf("informe um valor:");
        scanf("%d",&vet[i]);
    }
    for(int i=0; i<tam;i++) {
        for(int j=0;j<tam;j++) {
            if(vet[i] == vet[j] && i != j) {
                for(int k=j; j<tam-1; j++) {
                    vet[k] = vet[k+1];
                }
                tam--;
            }
        }
    }

    return 0;
}
