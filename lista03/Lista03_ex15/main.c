#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f;
    printf("informe um numero:");
    scanf("%d",&n);
    f=n;
    for(  i=1;n>=1;n--){
      i=n*i;
    }
    printf("\nfatorial de %d! =%d",f,i);
}
