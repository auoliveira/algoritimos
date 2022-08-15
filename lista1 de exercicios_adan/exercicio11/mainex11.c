#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ndias;
    int anos;
    int meses;
    int dias;
    printf("informe o numero de dias sem acidentes:");
    scanf("%d",&ndias);
    anos=ndias/365;
    meses=(ndias-(anos*365))/30;
    dias=30-(ndias-(anos*365))/30;
    printf("estamos a %danos,%dmeses,%ddias sem acidentes",anos,meses,dias);
    return 0;
}
