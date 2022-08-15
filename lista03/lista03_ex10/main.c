#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num,aux;
    for(int i=0; i<20; i++){
    printf("informe um numero:");
    scanf("%d",&num);
        if(num%2==0){
        aux++;
        }
    }
    printf("\n%d numero par",aux);
    return 0;
}
