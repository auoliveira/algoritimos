#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario;
    printf("informe o salario:");
    scanf("%lf",&salario);
    printf("seu salario e:%.2lf",(salario*1.15)-(salario*1.15)*.08);
    return 0;
}
