#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ncavalos;
    printf("informe o numero de cavalos:");
    scanf("%d",&ncavalos);
    printf("serao necessarias %ld ferraduras",ncavalos*4);
    return 0;
}
