#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,r;
    printf("informe um numero:");
    scanf("%f",&n1);
    printf("informe um numero:");
    scanf("%f",&n2);
    printf("informe um numero:");
    scanf("%f",&n3);
    r=n1*n2*n3;
    printf("o valor da multiplicacao e:%.2f",r);

    return 0;
}
