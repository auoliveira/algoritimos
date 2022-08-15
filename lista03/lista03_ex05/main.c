#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char nome[10];
    printf("digite nome:");
    scanf("%s",&nome);
    printf("informe um numero:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("\n%s\n",nome);
    }
    return 0;
}
