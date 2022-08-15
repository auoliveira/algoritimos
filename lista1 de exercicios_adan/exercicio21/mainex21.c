#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lata;
    float garrafinha;
    float garrafa;
    printf("informe a quantidade de latas:");
    scanf("%f",&lata);
    printf("informe a quantidade de garrafinhas:");
    scanf("%f",&garrafinha);
    printf("informe a quantidade de garrafas:");
    scanf("%f",&garrafa);
    printf("a quantiade de litros e:%.2f",((lata*.35)+(garrafinha*.6)+(garrafa*2)));
    return 0;
}
