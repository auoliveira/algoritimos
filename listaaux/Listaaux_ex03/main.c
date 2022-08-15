#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("informe n:");
    scanf("%d",&n);
    printf("informe m:");
    scanf("%d",&m);
    for(int i=1;i<=200;i++){
        if((i%n==0)&&(i%m!=0)){
            printf("\n%d",i);
        }
    }

    return 0;
}
