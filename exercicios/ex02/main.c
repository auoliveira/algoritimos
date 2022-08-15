#include <stdio.h>
#include <stdlib.h>

void lervetor( int vet[],int tam);
void zerarvetor(int vet[],int tam);
int maiorelemento (int vet[],int tam);
int menorelemento (int vet[],int tam);
double media(int vet[],int tam);



int main()
{
    int tam,j=10;
    printf("informe o tamanho do vetor:");
    scanf("%d",&tam);
    int vet[tam];

    lervetor(vet,tam);
    media(vet,tam);
    imprimirvetor(vet,tam);
    maiorelemento(vet,tam);
    menorelemento(vet,tam);
    printf("%d\n", maiorelemento ( vet, tam));
    printf("%d\n", menorelemento ( vet, tam));
    printf("%f\n", media ( vet, tam));
    zerarvetor(vet,tam);
    imprimirvetor(vet,tam);
    printf("\nj:%f",j/media(vet,tam));

    return 0;
}
void lervetor( int vet[],int tam){
    for (int i=0;i<tam;i++){
        printf("informe o elemento do vetor:");
        scanf("%d",&vet[i]);
    }
}
void zerarvetor(int vet[],int tam){
    for (int i=0;i<tam;i++){
        vet[i]=0;
    }
}
void imprimirvetor(int vet[],int tam){
    for (int i=0;i<tam;i++){
        printf("[%d]",vet[i]);
    }
}
int maiorelemento(int vet[],int tam){
    int maior;
    for(int i=0;i<tam;i++){
        if (i==0){
            maior=vet[i];
        }
        if(vet[i]>maior){
            maior=vet[i];
        }
    }printf("\nmaior elemento:%d\n",maior);
    return maior;
}
int menorelemento(int vet[],int tam){
    int menor;
    for(int i=0;i<tam;i++){
        if (i==0){
            menor=vet[i];
        }
        if(vet[i]<menor){
            menor=vet[i];
        }
    }printf("\nmenor elemento:%d\n",menor);
    return menor;
}
double media(int vet[],int tam){
    int soma=0;
    double media=0;
    for(int i=0;i<tam;i++){
        soma=soma+vet[i];
    }
    media=(double)soma/tam;
    printf("\nmedia =%.2f , soma=%d\n",media,soma);
    return media;
}


