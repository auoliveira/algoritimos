

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct poltrona{
    char nome[50];
    int status;
    int npol;
    float valor;

};
int mostraMenu();
struct poltrona lePoltrona();
int main() {

    struct poltrona;

    int opcao,poltronas[8][8];

    do {
    opcao = mostraMenu();

    switch(opcao) {
    case 1: printf("informe a poltrona:");
            scanf("%");
        break;
    case 2:
        lePoltrona();
        break;
    case 3:
        break;
    case 4:

        for(char letra='A';letra<='H';letra++){
            for(int j=1;j<9;j++){
                printf("[%c%d]",letra,j);
            }printf("\n");
    }

        break;
    case 0:
        printf("\nSaindo...");
    }
    } while(opcao != 0);



    return 0;
}



int mostraMenu() {
    int opcao = 0;

    printf(" ------------ CineConnect ------------\n");
    printf("1 - Para reservar poltrona\n");
    printf("2 - Para comprar ingresso\n");
    printf("3 - Para cancelar reserva\n");
    printf("4 - Exibir poltronas\n");
    printf("0 - Sair\n");
    printf(" -----------------------------------------\n");
    do {
        printf("Qual sua escolha: ");
        scanf("%d", &opcao);
    }while(opcao < 0 || opcao > 4);

    return opcao;
}
struct poltrona lePoltrona(){
    struct poltrona aux;
    aux.status=0;
    fflush(stdin);

    printf("Digite o nome:");
    gets(aux.nome);

    printf("digite 1 para reserva ou 2 para compra.");
    scanf("%d",&aux.status);

    printf("informe o numero da poltrona:");
    scanf("%d",&aux.npol);

    printf("informe valor:");
    scanf("%f",&aux.valor);
    printf("\n");

    return aux;
};
void imprimePoltrona(struct poltrona x){
    printf("\nTitulo:%s\n",x.nome);
    printf("Codigo interno:%d\n",x.status);
    printf("Preco:%f\n",x.valor);

}
