#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[30];
    printf("informe seu nome:");
    scanf("%s",nome);
    printf("informe sua idade:");
    scanf("%d",&idade);
    printf("%s,voce possui %ddias de vida",nome,idade*365);
    return 0;
}
