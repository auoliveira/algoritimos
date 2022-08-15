#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1,l2,area;
    printf("informe o medida do lado1:");
    scanf("%f",&l1);
    printf("informe o medida do lado2:");
    scanf("%f",&l2);
    area=l1*l2;
    printf("a area do quadrado e:%.2f",area);
    return 0;
}
