#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10]={100,99,98,97,96,95,94,93,92,91};

    int aux,i,j;
    for ( i =1; i <10 ;i++){// este for é resposavel em ir porcorendo o vetor

        for ( j = i-1;j>=0 && vet[j]>vet[i]; j--){// este for e responsavel em comparar os
                                                //elementos do vetor e realizar a troca.

            aux=vet[j]; // bloco responsavel em realizar a troca de posição dos elementos.
            vet[j]=vet[i];
            vet[i]=aux;
            i--;
            }
            for(int x=0;x<10;x++){
            printf("[%d] ",vet[x]);
            } printf("\n");
        }


    return 0;
}
