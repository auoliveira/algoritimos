#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int centena;
    int dezena;
    int unidade;
    printf("informe um numero:");
    scanf("%d",&numero);
    centena=numero/100;
    dezena=numero/10;
    printf("centena=%d\ndezena=%d\nunidade=%d",centena,dezena,numero);
    return 0;
}
