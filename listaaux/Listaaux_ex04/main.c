#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,j;

    printf("informe o n:");
    scanf("%d",&n);
    for( int i=1;n>1;i++){
        n=n/10;
        j=i;
    }
    printf("%d",j);
    return 0;
}
