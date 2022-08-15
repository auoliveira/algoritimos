#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao,conta;
    conta=0;


    do {
        printf("----------- menu ------------\n");
        printf("1 - macarrao\n");
        printf("2 - lasanha\n");
        printf("3 - feijoada\n");
        printf("0 - sair\n");
        printf("-----------------------------\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Voce escolheu macarrao!\n");
                conta=conta+10;
                break;
            case 2:
                printf("Voce escolheu lasanha!\n");
                conta=conta+20;
                break;
            case 3:
                printf("Voce escolheu feijoada!\n");
                conta=conta+15;
                break;
            case 0:
                printf("Sair!\n");
                break;
            default:
                printf("opcao invalida");
        }
    } while(opcao != 0);

printf("sua conta foi de :%d",conta);
    return 0;
}
