#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    int mes;
    printf("informe a data dd/mm:");
    scanf("%d/%d",&dia,&mes);
    printf("ja se passaram %d dias desse ano",(mes-1)*30+dia);
    return 0;
}
