#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1;
    double nota2;
    double nota3;
    printf("informe a primeira nota:");
    scanf("%lf",&nota1);
    printf("informe a segunfa nota:");
    scanf("%lf",&nota2);
    printf("informe a terceira nota:");
    scanf("%lf",&nota3);
    printf("a media pondera e :%lf",(nota1*1+nota2*2+nota3*3)/(1+2+3));
    return 0;
}
