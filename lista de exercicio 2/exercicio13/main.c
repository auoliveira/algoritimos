#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cm,ca,dz,co,um;
    int ax;

    printf("informe o valor:");
    scanf("%d",&ax);


    cm=ax/100;
    ax-=cm*100;

    ca=ax/50;
    ax-=ca*50;

    dz=ax/10;
    ax-=dz*10;

    co=ax/5;
    ax-=co*5;

    um=ax/1;
    ax-=um*1;
    printf("%d nota de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 1",cm,ca,dz,co,um);
    return 0;
}
