#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
   int x,soma=0,r=0;
   printf("informe o intervalo:");
   scanf("%d",&x);
   for(int i=0;i<x;i++){
    soma++;
    r=r+soma;
   }
    printf("somatorio:%d",r);

    return 0;
}
