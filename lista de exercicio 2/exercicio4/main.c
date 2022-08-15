#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    printf("informe um numero:");
    scanf("%f",&n1);
    if(n1>0){printf("%f",(n1*2));
    }else {printf("%.2f",(n1*3));
    }
    return 0;
}
