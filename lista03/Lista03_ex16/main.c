#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qnt,valor=0,total=0,soma=0;

    printf("\n****Para finalizar digite quantidade='0'****\n\n");
    for(int i=1;i>=0;i++){
        printf("informe quantidade:");
        scanf("%f",&qnt);

            if (qnt==0){
                break;
            }
        printf("informe valor:");
        scanf("%f",&valor);
        soma=qnt*valor;
        total=soma+total;
        }
    printf("Valor total das compras: %.2f",total);

}

