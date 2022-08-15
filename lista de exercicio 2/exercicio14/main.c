#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float valor;
    printf("informe o ano do veiculo digitar, milhar correspondente (XXXX):");
    scanf("%d",&ano);
    printf("informe o valor:");
    scanf("%f",&valor);
    if(ano<1990){(valor=valor*1.01);
        printf("valor do veiculo:%.2f",valor);
    }else {(valor=valor*1.015);
        printf("valor do veiculo:%.2f",valor);
    }
    return 0;
}
