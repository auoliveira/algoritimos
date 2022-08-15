#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    float r;
    printf("informe um numero:");
    scanf("%f",&n1);
    printf("informe um numero diferente de ZERO:");
    scanf("%f",&n2);
    r=(n1/n2);
    printf("o resultado e:%.2f",r);
    return 0;
}
