#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao,qnt;
    float valor=0;
    printf("cardapio escolha uma no opcao\n");
    printf("1-misto quente   R$8,00\n");
    printf("2-bauru          R$8,50\n");
    printf("3-hanburger      R$9,00\n");
    printf("4-cheesburger    R$10,00\n");
    printf("5-cachorroquente R$11,00\n");
    printf("6-refrigerante   R$ 4,00\n");
    printf("informe opcao:");
    scanf("%d",&opcao);
    printf("informe quantidade:");
    scanf("%d",&qnt);
    if (opcao==1){(valor=valor+8*qnt);
        printf("valor=%.2f",valor);
    }else if (opcao==2){(valor=valor+8.5*qnt);
        printf("valor=%.2f",valor);
    }else if (opcao==3){(valor=valor+9*qnt);
        printf("valor=%.2f",valor);
    }else if (opcao==4){(valor=valor+10*qnt);
        printf("valor=%.2f",valor);
    }else if (opcao==5){(valor=valor+11*qnt);
        printf("valor=%.2f",valor);
    }else if (opcao==6){(valor=valor+4*qnt);
        printf("valor=%.2f",valor);
    }else

    return 0;
}
