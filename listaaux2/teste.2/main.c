/*Suponha que criamos uma estrutura para armazenar Datas:
struct Data{
int dia;
int mes;
int ano;
};
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos.*/
#include <stdio.h>
#include <stdlib.h>
struct Data{
int dia;
int mes;
int ano;
};
struct Data leData();
void imprimeData(struct Data vet[], int n);
void ordenaData (struct Data vet[], int n);
int main()
{
    int n=3;
    struct Data vet[n], aux;

    for(int i=0;i<n;i++){
        vet[i]=leData();
    }

    imprimeData(vet,n);
    ordenaData(vet,n);
    printf(">>ordenado<<");
    imprimeData(vet,n);
    return 0;
}
struct Data leData(){
    struct Data aux;
    printf("Informe o dia:");
    scanf("%d",&aux.dia);
    printf("Informe o mes:");
    scanf("%d",&aux.mes);
    printf("Informe o ano:");
    scanf("%d",&aux.ano);
    printf("\n");
    return aux;
}

void imprimeData(struct Data vet[], int n){
      for(int i =0;i<n;i++){
       printf("\n%d/%d/%d\n",vet[i].dia,vet[i].mes,vet[i].ano);

    }

}
void ordenaData (struct Data vet[], int n){
    struct Data x;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           x=vet[i];
           if(vet[i].ano<vet[j].ano) {
                vet[i]=vet[j];
                vet[j]=x;
           }
        }
    }
    for (int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            x=vet[i];
            if((vet[i].ano==vet[k].ano)&&vet[i].mes<vet[k].mes){
                vet[i]=vet[k];
                vet[k]=x;
            }
        }
    }
     for (int i=0;i<n;i++){
        for(int l=0;l<n;l++){
            x=vet[i];
            if((vet[i].ano==vet[l].ano)&&(vet[i].mes==vet[l].mes)&&vet[i].dia<vet[l].dia){
                vet[i]=vet[l];
                vet[l]=x;
            }
        }
    }

}




