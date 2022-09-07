// Sistema de cadastro de alunos
// -> inserir Aluno
// -> excluir Aluno
// -> imprimir Turma
// -> calcular a média da Turma

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 5

// registro que representa um aluno
struct Aluno {
    char nome[50];
    int RA;
    float nota;
    int ocupado;
};

// protótipos das funções
void iniciaTurma(struct Aluno turma[], int tam);
struct Aluno leAluno();
int cadastraAluno(struct Aluno turma[], int tam, struct Aluno novoAluno);
int mostraMenu();
void imprimeTurma(struct Aluno turma[], int tam);
int excluirAluno(struct Aluno turma[], int tam, int RA);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno turma[TAM];
    int opcao;

    // iniciar uma turma vazia
    iniciaTurma(turma, TAM);


    // mostrar um menu com as opções disponíveis
    // e ler a opção escolhida pelo usuário

    do {
    opcao = mostraMenu();

    switch(opcao) {
    case 1:
        {
        struct Aluno aux = leAluno();
        cadastraAluno(turma, TAM, aux);
        break;
        }
    case 2:
        {
        int RA;
        printf("Qual é o RA do aluno que deseja excluir: ");
        scanf("%d", &RA);
        excluirAluno(turma, TAM, RA);
        break;
        }
    case 3:
        break;
    case 4:
        imprimeTurma(turma, TAM);
        break;
    case 0:
        printf("\nSaindo...");
    }
    } while(opcao != 0);



    return 0;
}

void iniciaTurma(struct Aluno turma[], int tam) {
    for(int i=0; i<tam; i++) {
        turma[i].ocupado = 0;
    }
}

struct Aluno leAluno() {
    struct Aluno aux;

    fflush(stdin);

    printf("Digite o nome do aluno: ");
    gets(aux.nome);


    printf("Digite o RA: ");
    scanf("%d", &aux.RA);

    printf("Digite a nota: ");
    scanf("%f", &aux.nota);

    aux.ocupado = 1;

    return aux;
}

int mostraMenu() {
    int opcao = 0;

    printf(" ------------ Cadastro Alunos ------------\n");
    printf("1 - Para cadastrar aluno\n");
    printf("2 - Para excluir aluno\n");
    printf("3 - Para exibir dados de um aluno\n");
    printf("4 - Exibir turma\n");
    printf("0 - Sair\n");
    printf(" -----------------------------------------\n");
    do {
        printf("Qual sua escolha: ");
        scanf("%d", &opcao);
    }while(opcao < 0 || opcao > 4);

    return opcao;
}

int cadastraAluno(struct Aluno turma[], int tam, struct Aluno novoAluno) {

    for(int i=0;i<tam;i++) {
        if(turma[i].ocupado == 0) {
            turma[i] = novoAluno;
            return 1; // 1 - representa sucesso da inserção
        }
    }

    return 0; // 0 - representa o não sucesso da inserção
}

void imprimeTurma(struct Aluno turma[], int tam) {

    for(int i=0;i<tam;i++) {
            if(turma[i].ocupado == 1) {
                printf("[%d] -----------------------\n", i);
                printf("Nome: %s\n", turma[i].nome);
                printf("RA: %d\n", turma[i].RA);
                printf("Nota: %.1f\n", turma[i].nota);
                printf("-----------------------\n\n");
            }
    }
}

int excluirAluno(struct Aluno turma[], int tam, int RA) {

    for(int i=0;i<tam;i++) {
        if(turma[i].ocupado == 1 && turma[i].RA == RA) {
            turma[i].ocupado = 0;
            return 1; // excusão concluída com sucesso
        }
    }

    return 0; // aluno não encontrado
}
