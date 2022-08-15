#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,aux;
    for(int i=0; i<20; i++){
    printf("informe um numero:");
    scanf("%d",&num);
        if(num>8){
        aux++;
        }
    }
    printf("\n%d numeros informados sao >8",aux);
    return 0;
}
