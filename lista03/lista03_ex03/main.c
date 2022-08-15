#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    printf("digite nome:");
    scanf("%s",&nome);
    for (int i=0;i<10;i++){
        printf("%s\n",nome);
    }

    return 0;
}

