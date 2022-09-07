/*Suponha que criamos uma estrutura para armazenar dados de pessoas e um vetor para armazenar
dados de várias pessoas:
struct Pessoa{
int rg;
int cpf;
char nome[80];
};
struct Pessoa cadastro[100];
Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função
de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o
RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Pessoa{
int rg;
int cpf;
char nome[80];
};


struct Pessoa lePessoa();
void imprimePessoas(struct Pessoa imp[], int n);
void ordenaCadastro(struct Pessoa cadastro[], int n);
int buscaRG(struct Pessoa cadastro[], int n);
void imprimePessoa(struct Pessoa imp);


int main()
{
    int n=4;
    struct Pessoa cadastro[n],aux;

    for(int i=0;i<n;i++){
        cadastro[i]=lePessoa();
    }
    ordenaCadastro(cadastro,n);
    imprimePessoas(cadastro,n);
    printf("%d",buscaRG(cadastro,n));
  //  imprimePessoas(cadastro[(buscaRG(cadastro,n))]);
    return 0;
}


struct Pessoa lePessoa(){
    struct Pessoa aux;
    printf("digite o nome:");
    fflush(stdin);
    gets(aux.nome);
    printf("informe o RG:");
    scanf("%d",&aux.rg);
    printf("informe a CPF:");
    scanf("%d",&aux.cpf);
    printf("\n");
    return aux;

};

void ordenaCadastro (struct Pessoa cadastro[], int n){
    struct Pessoa x;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           x=cadastro[i];
           if(cadastro[i].rg<cadastro[j].rg) {
                cadastro[i]=cadastro[j];
                cadastro[j]=x;
           }
        }
    }
}

void imprimePessoas(struct Pessoa cadastro[], int n){
      for(int i =0;i<n;i++){
       printf("\nNome:%s\nRG:%d\nCPF:%d\n",cadastro[i].nome,cadastro[i].rg,cadastro[i].cpf);

    }
}


int buscaRG(struct Pessoa cadastro[], int n){
    int busca;
    int min =0;
    int max=n;
    int aux;
    int cont =0;


    printf("Imforme o RG:");
    scanf("%d",&busca);
    for(int i=0;i<=n/2;i++){

        aux = (min+max)/2;
        if(cadastro[aux].rg > busca){
            max = aux;
        }
        else if(cadastro[aux].rg < busca){
            min = aux;
        }
        else if(busca == cadastro[aux].rg){
                printf("\n>cadastro encontrado<\n");
                printf("\nNome:%s\nRG:%d\nCPF:%d\n",cadastro[aux].nome,cadastro[aux].rg,cadastro[aux].cpf);
                return 1;
        }

    }

    return -1;
}

