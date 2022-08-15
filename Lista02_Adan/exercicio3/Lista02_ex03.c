#include <stdio.h>
#include <stdlib.h>
//Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
//caso contrário multiplique A por B. Ao final, apresente o resultado.

int main()
{
    float n1,n2;
    printf("informe um numero:");
    scanf("%f",&n1);
    printf("informe um numero:");
    scanf("%f",&n2);
    if (n1==n2){printf("%f",n1+n2);
    }else{printf("%f",n1*n2);
    }

    return 0;
}
