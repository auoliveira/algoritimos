#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qnt;
    float agua;
    float suco;
    printf("informe a qnt de suco desejada:");
    scanf("%f",&qnt);
    agua=(.8*qnt);
    suco=(.2*qnt);
    printf("sera necessario: %.2fL de agua\nsera necessario %.2fL de suco",agua,suco);
    return 0;
}
