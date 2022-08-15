#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    float mp;
    printf("informe primeira nota:");
    scanf("%f",&n1);
    printf("informe segunda nota:");
    scanf("%f",&n2);
    mp=(n1*2+n2*3)/(2+3);
    printf("a nota final e:%.2f",mp);
    return 0;
}
