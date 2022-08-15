#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,aux;
    for(int i=0; i<20; i++){
    printf("informe um numero:");
    scanf("%d",&num);
        if((num>=0)&&(num<=100)){
        aux++;
        }
    }
    printf("\n%d entao entre o intervalo de 0-100",aux);
    return 0;
}
