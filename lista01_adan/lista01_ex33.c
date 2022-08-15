#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ba,bm,h,area;
    printf("informe a base maior:");
    scanf("%f",&ba);
    printf("informe a base menor:");
    scanf("%f",&bm);
    printf("informe a altura:");
    scanf("%f",&h);
    area=((ba-bm)*h)/2;
    printf("a area do trapezio e:%.2f",area);
    return 0;
}
