/*Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[6]={1, 0, 5, -2, -5,7},soma=0;
    for (int i=0;i<6;i++){
        if(i==0||i==1||i==5){
            soma=soma+vet1[i];
        }
        if(i==4){
            vet1[4]+=100;
        }
    }
    printf("soma das posicoes 0,1,5 de vet1 = %d\n",soma);
    for (int i=0;i<6;i++){
        printf("vet[%d]=%d\n",i,vet1[i]);
    }

    return 0;
}
