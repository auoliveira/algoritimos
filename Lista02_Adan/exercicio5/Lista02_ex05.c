#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("informe um numero:");
    scanf("%d",&n1);
    if(n1%2==0){printf("%d",(n1+5));
    }else{printf("%d",(n1+8));
    }
    return 0;
}
