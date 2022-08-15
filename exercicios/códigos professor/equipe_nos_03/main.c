#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int vet[], int tam) ;
void bublesort(int vet[], int tam);
int indiceMenorElemento(int vet[], int tam, int ref);
void trocaElementoVetor(int vet[], int pos1, int pos2);

int main() {

    int vet[] = {8, 5 , 1 , 4 , 6, 7, 9};
    int TAM = sizeof(vet)/sizeof(int);

    printf("ORIG: ");
    imprimeVetor(vet, TAM);

    //bublesort(vet, TAM);
    selectionsort(vet, TAM);

    // imprime o vetor ordenado
    printf("\nORD: ");
    imprimeVetor(vet, TAM);

    return 0;
}

void imprimeVetor(int vet[], int tam) {
    for(int i=0;i<tam;i++) {
        printf("%d ", vet[i]);
    }

}

void bublesort(int vet[], int tam) {
    // bublesort
    for(int i=tam-1 ; i>=0; i--) {

        // trocar os elementos vizinhos se estiverem na ordem incorreta
        for(int j=0 ; j<i; j++) {
            if(vet[j+1] < vet[j]) {
                trocaElementoVetor(vet, j, j+1);
            }
        }
    }
}

int indiceMenorElemento(int vet[], int tam, int ref) {


    int indMenor = ref;
    for(int i=(1+ref) ; i<tam ; i++) {
        if(vet[i] < vet[indMenor]) {
            indMenor = i;
        }
    }

    return indMenor;
}

void trocaElementoVetor(int vet[], int pos1, int pos2) {
    int aux = vet[pos1];
    vet[pos1] = vet[pos2];
    vet[pos2] = aux;
}


void selectionsort(int vet[], int tam) {
    int indMenor;

    for(int i=0; i<tam ; i++) {
        indMenor = indiceMenorElemento(vet, tam, i);
        trocaElementoVetor(vet, i, indMenor);
    }
}
