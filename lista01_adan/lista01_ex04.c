#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    float valor;
    printf("informe o preco do combustivel:");
    scanf("%f",&preco);
    printf("informe qts reais serao colocados:");
    scanf("%f",&valor);
    printf("vc vai abastecer %0.2fl",valor/preco);
    return 0;
}
