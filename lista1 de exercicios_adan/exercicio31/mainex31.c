#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,ganho,perda;
    printf("informe o peso:");
    scanf("%f",&peso);
    ganho=peso*1.15;
    perda=peso*.8;
    printf("peso com ganho:%.2fkg\npeso com perda:%.2fkg",ganho,perda);
    return 0;
}
