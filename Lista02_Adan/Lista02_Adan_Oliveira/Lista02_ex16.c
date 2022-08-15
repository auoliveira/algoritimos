#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo,credito=0;
    printf("informe saldo:");
    scanf("%f",&saldo);
    if (saldo<200){printf("sem credito, se contrala parca");
    }else if((saldo>201)&&(saldo<400)){(credito=saldo*.2);
    printf("valor do credito=%.2f",credito);
    }else if((saldo>401)&&(saldo<600)){(credito=saldo*.3);
    printf("valor do credito=%.2f",credito);
    }else if(saldo>601){(credito=saldo*.4);
    printf("valor do credito=%.2f",credito);
    }
    return 0;
}
