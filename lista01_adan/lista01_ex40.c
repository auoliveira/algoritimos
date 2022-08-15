#include <stdio.h>
#include <stdlib.h>

int main()
{
    float co,ca,h;
    printf("informe cateto oposto:");
    scanf("%f",&co);
    printf("informe cateto adjacente:");
    scanf("%f",&ca);
    h=pow(co,2)+pow(ca,2);
    printf(" o valor da hipotenusa e:%.2f",h);
    return 0;
}
