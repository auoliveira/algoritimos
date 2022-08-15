#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("informe a temperatura em grau celcius:");
    scanf("%f",&temp);
    printf("a temperatura em Fahrenheit e:%.2fF",(temp*9/5)+32);
    return 0;
}
