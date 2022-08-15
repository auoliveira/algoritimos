#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d;
    float l;
    printf("informe o diametro:");
    scanf("%f",&d);
    printf("informe a altura:");
    scanf("%f",&l);
    printf("o volume da caixa e:%.2fL",((3.14*(d*d))/4)*l);
    return 0;
}
