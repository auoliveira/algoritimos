#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float ha, sal;
    printf("informe o nivel 1,2 ou 3:");
    scanf("%d",&n);
    printf("informe a qnt de hora aula:");
    scanf("%f",&ha);
    sal=(ha*4.5);
    if(n==1){printf("salario= %.2lfR$",sal*12);
    }else if (n==2){printf("salario= %.2lfR$",sal*17);
    }else if (n==3){printf("salario= %.2lfR$",sal*25);
    }
    return 0;
}
