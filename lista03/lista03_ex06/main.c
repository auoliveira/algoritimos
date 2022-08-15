#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,soma;
    for(int i=0;i<20;i++){
        printf("informe idade:");
        scanf("%d",&idade);
        soma=idade+soma;
    }
    printf("%d e %d",soma,(soma/20));
    return 0;
}
