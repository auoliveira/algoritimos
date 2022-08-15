#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("informe um numero:");
    scanf("%f",&a);
    printf("informe um numero:");
    scanf("%f",&b);
    if(a<b){printf("%f",b);
        }else if(a>b){printf("%f",a);
        }else {printf("iguais");
    }
    return 0;
}
