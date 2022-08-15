#include <stdio.h>
#include <stdlib.h>

int main()
{
    double peso;
    printf("informe o peso:");
    scanf("%lf",&peso);
    printf("valor a ser pago:%.2lf",peso*12);
    return 0;
}
