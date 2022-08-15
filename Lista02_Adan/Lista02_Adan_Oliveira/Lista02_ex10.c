#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("informe um numero:");
    scanf("%d",&n1);
    printf("informe um numero:");
    scanf("%d",&n2);
    if(n1>n2){printf("%d",n1-n2);
    }else if(n2>n1) {printf("%d",n2-n1);
    }else if(n1==n2) {printf("0");
    }
    return 0;
}
