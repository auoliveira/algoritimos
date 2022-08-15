#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float valor;
    printf("informe o valor:");
    scanf("%f",&valor);
    printf("-------opcao-------\n");
    printf("1 - a vista c/ 10desc\n");
    printf("2 - a vista no CC 15desc\n");
    printf("3 - 2X no preco a vista\n");
    printf("4 - 2x com 10% no preco a vista\n");
    printf("selecione opcao:");
    scanf("%d",&opcao);
        if(opcao==1){printf("o valor total e:%.2lf",(valor*.9));
        }else if(opcao==2){printf("o valor total e:%.2lf",(valor*.85));
        }else if(opcao==3){printf("valor da parcela e:%.2lf",(valor/2));
        }else printf("valor da parcela e:%.2lf",(valor*1.1)/2);

    return 0;
}
