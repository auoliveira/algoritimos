#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1;
    double n2;
    double n3;
    printf("informe o primeiro numero:");
    scanf("%lf",&n1);
    printf("informe o segundo numero:");
    scanf("%lf",&n2);
    printf("informe o primeiro numero:");
    scanf("%lf",&n3);
    if((n1>n2)||(n1>n3)){
        printf("seu maior numero e:%.2f",n1);
    }else if(n2>n3){
        printf("seu maior numero e:%.2f",n2);
    }else {printf("seu maior numero e:%.2f",n3);
    }
    return 0;
}
