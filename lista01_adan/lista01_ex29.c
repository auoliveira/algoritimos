#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    float desc;
    printf("informe o valor do produto:");
    scanf("%f",&valor);
    desc=valor*.9;
    printf("o valor do produto com desconto e:%.2fR$",desc);
    return 0;
}
