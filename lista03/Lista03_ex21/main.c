#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=0,nf=0,res;
    for(int i=0;(nf+f)<50;i++){
        printf("infore a area de reserva digite '1' para nao fumantes e '0' para fumantes:");
        scanf("%d",&res);
        if (res==1&&nf<25){
            nf++;
        }
        if(nf>=25){
            printf("\nATENCAO\narea de nao fumantes lotada\n");
        }
         if (res==0&&f<25){
            f++;
        }
        if(f>=25){
            printf("\nATENCAO\narea de fumantes lotada\n");
        }
        printf("Ha %d mesas diponiveis na area de fumantes\n",25-f);
        printf("Ha %d mesas diponiveis na area de nao fumantes\n",25-nf);
    }
    return 0;
}
