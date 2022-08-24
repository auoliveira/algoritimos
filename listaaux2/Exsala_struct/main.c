// inclusao de livros inclusao de livros.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
    char titulo[50];
    int codigo;
    float preco;
    int isbn;
};

struct livro leLivro();
void imprimeLivro(struct livro x);

int main()
{
    struct livro acervo[5];

    for(int i=0;i<5;i++){
        acervo[i]=leLivro();
    }

    for(int i=0;i<5;i++){
        imprimeLivro(acervo[i]);
    }

}

struct livro leLivro(){
    struct livro aux;

    fflush(stdin);

    printf("Digite o titulo:");
    gets(aux.titulo);

    printf("digite o codigo autoincrementado.");
    scanf("%d",&aux.codigo);
    aux.codigo++;

    printf("digite o preco:");
    scanf("%f",&aux.preco);

    printf("digite coigo ISBN:");
    scanf("%d",&aux.isbn);
    printf("\n");

    return aux;
};

void imprimeLivro(struct livro x){
    printf("\nTitulo:%s\n",x.titulo);
    printf("Codigo interno:%d\n",x.codigo);
    printf("Preco:%f\n",x.preco);
    printf("Codigo ISBN:%d\n",x.isbn);
}
