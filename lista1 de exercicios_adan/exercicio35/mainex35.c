#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dma,dme,area;
    printf("informe a diagonal maior:");
    scanf("%f",&dma);
    printf("informe a diagonal menor:");
    scanf("%f",&dme);
    area=(dma*dme)/2;
    printf("a area do trapezio e:%.2f",area);
    return 0;
}
