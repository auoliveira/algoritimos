#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int n;
    printf("digite nome:");
    scanf("%s",&nome);
    printf("informe o numero de impressoes:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("%s\n",nome);
    }
    return 0;
}
