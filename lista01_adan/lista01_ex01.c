#include <stdio.h>
#include <stdlib.h>

int main()
{
    double comprimento;
    double largura;
    printf("informe o comprimento do terreno:");
    scanf("%lf",&comprimento);
    printf("informe a largura do torreno:");
    scanf("%lf",&largura);
    printf("o terreno possui=%0.2lf",comprimento*largura);
    return 0;
}
