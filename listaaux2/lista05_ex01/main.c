/*. Suponha que criamos uma estrutura para armazenar produtos de um supermercado:
struct Produto{
char nome[80];
double preco;
int quantidade;
};
Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], int
n) e void ordenaQuant(struct Produto vet[], int n).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Produto{
char nome[80];
double preco;
int quantidade;
};
struct Produto leProduto();
void imprimeProduto(struct Produto p[], int i);
void ordenaPreco(struct Produto vet[], int n);
void ordenaQuant(struct Produto vet[], int n);

int main()
{
   int n=3;
   struct Produto vet[n],aux;

    for (int i=0;i<n;i++){
        vet[i]=leProduto();
    }
    imprimeProduto(vet,n);
    ordenaPreco(vet,n);
    printf("\n>>ordenacao por preco<<\n");
    imprimeProduto(vet,n);
    ordenaQuant(vet,n);
    printf("\n>>ordenacao por quantidade<<\n");
    imprimeProduto(vet,n);

    return 0;
}
void ordenaPreco(struct Produto vet[], int n){

    struct Produto x;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           x=vet[i];
           if(vet[i].preco>vet[j].preco) {
            vet[i]=vet[j];
            vet[j]=x;
           }
        }
    }
}


void ordenaQuant(struct Produto vet[], int n){
    struct Produto x;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           x=vet[i];
           if(vet[i].quantidade>vet[j].quantidade) {
            vet[i]=vet[j];
            vet[j]=x;
           }
        }
    }
}

struct Produto leProduto(){
    struct Produto aux;
    printf("Nome:");
    fflush(stdin);
    gets(aux.nome);
    printf("Preco:");
    scanf("%lf",&aux.preco);
    printf("Quantidade:");
    scanf("%d",&aux.quantidade);
    printf("\n");
    return aux;
    }

void imprimeProduto(struct Produto p[], int n){
      for(int i =0;i<n;i++){
       printf("\n---Produto---");
       printf("\nNome:%s",p[i].nome);
       printf("\nValor:%.2f",p[i].preco);
       printf("\nQuantidade:%d\n",p[i].quantidade);

    }

}
