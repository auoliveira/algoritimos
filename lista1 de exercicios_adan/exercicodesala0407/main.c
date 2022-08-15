#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("informe o numero:");
    scanf("%d",&valor);
    if(((valor>10)&&(valor%2==0))||(valor%2!=0)&&(valor<50)){
        printf("sim");
    }else{
        printf("nao");
        }

    return 0;
}
