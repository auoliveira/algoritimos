//Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
//lidos na ordem inversa.
#include <stdio.h>
#include <stdlib.h>
void imprimeVetor(int vet[]);
int main()
{
    int vet1[6],vet2[6],n;
    for(int i=0;i<6;){
        printf("informe um numero:");
        scanf("%d",&n);
        if(n%2==0){
            vet1[i]=n;
            vet2[5-i]=n;
            i++;
        }else {printf("o numero informado e impar! informe outro.");}

    }
   // for(int j=5;j>=0;j--){
           // vet2[j]=vet1[5-j];
     //   }
    imprimeVetor(vet1);
    imprimeVetor(vet2);
    return 0;
}

void imprimeVetor(int vet[]) {

    for(int i=0;i<6;i++){
        printf("[%d]",vet[i]);
    }printf("\n");
}
