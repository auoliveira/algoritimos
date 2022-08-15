#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio;
    double resultado;
    printf("informe o raio:");
    scanf("%lf",&raio);
    resultado=3.14*pow(raio,2);
    printf("a area e:%lf",resultado);
    return 0;
}
