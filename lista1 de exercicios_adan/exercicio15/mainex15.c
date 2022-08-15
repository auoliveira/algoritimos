#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;
    double npessoas;
    int parteInteira;
    printf("informe o valor:");
    scanf("%lf",&valor);
    printf("informe o numero de pessas:");
    scanf("%lf",&npessoas);

    parteInteira = valor / npessoas;

    printf("parte inteira = %d\n", parteInteira);
    printf("o ultimo pagara = %.2f\n", valor-(parteInteira* (npessoas-1)));

    return 0;
}
