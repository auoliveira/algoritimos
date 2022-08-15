#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1,l2,l3;
    printf("informe o primeiro lado:");
    scanf("%f",&l1);
    printf("informe o segundo lado:");
    scanf("%f",&l2);
    printf("informe o terceiro lado:");
    scanf("%f",&l3);
    if((l1>l2+l3)||(l2>l3+l1)||(l3>l2+l1)){
        printf("nao e um tringulo");
    }else if((l1==l2)&&(l1==l2)&&(l1==l3)){printf("triangulo equilatero");
    }else if((l1==l2)||(l1==l3)||(l1==l3)){printf("triangulo isoceles");
    }else if((l1!=l2)||(l1!=l3)||(l2!=l3)){printf("triangulo escaleno");
    }
    return 0;
}
