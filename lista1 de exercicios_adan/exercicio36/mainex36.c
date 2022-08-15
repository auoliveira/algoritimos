#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sm,sf;
    printf("informe o valor do salario minimo:");
    scanf("%f",&sm);
    printf("informe o valor do salario do trabalhador:");
    scanf("%f",&sf);
    printf("o trabalhador recebe %.2f salarios minimos",(sf/sm));
    return 0;
}
