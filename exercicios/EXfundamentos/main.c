#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0.5;
    double soma1=0.5;
    for (int i=1;i<30000;i++){
        soma=soma+0.5;
        soma1=soma1+0.5;
    }
    printf("somatorio=%f e %f",soma,soma1);
    return 0;
}
