#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,bebida,total=0,soma=0;

    printf("\n****Para finalizar digite peso e bebida='0' ****\n\n");
    for(int i=1;i>=0;i++){
        printf("informe peso:");
        scanf("%f",&peso);
       // printf("%.2f",(peso*23.59));
        printf("informe valor da bebida:");
        scanf("%f",&bebida);
        soma=(peso*23.59)+bebida;
        total=soma+total;
        if ((peso==0)&&(bebida==0)){
                break;
            }
        }
    printf("Valor total das compras: %.2f",total);
    return 0;
}
