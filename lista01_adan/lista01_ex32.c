#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    printf("informe o peso:");
    scanf("%f",&peso);
    printf("o seu peso em gramas e:%.2fkg",(peso*1000));
    return 0;
}
