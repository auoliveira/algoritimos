#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("informe o numero a ser tabulado:");
    scanf("%d",&n);
    printf("informe o fim da tabulacao:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        printf("\n%dx%d=%d",i,n,(n*i));
    }
    return 0;
}
