//Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],par=0,impar=0;
    for(int i=0;i<10;i++){
        printf("informe um valor para posicao %d:",i);
        scanf("%d",&vet[i]);
        if(vet[i]%2==0){
            par++;
        }else{
            impar++;
        }
    }
    printf("total de pares:%dtotal de impares:%d",par,impar);
    return 0;
}
