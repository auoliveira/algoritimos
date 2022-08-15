#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float salario;
    printf("informe o cod:");
    scanf("%d",&cod);
    printf("informe o salario:");
    scanf("%f",&salario);
    if (cod==101){(salario=salario*1.1);
        printf("gerente novo salario=%.2f",salario);
    }else  if (cod==102){(salario=salario*1.2);
        printf("engenheiro novo salario=%.2f",salario);
    }else  if (cod==103){(salario=salario*1.3);
        printf("tecnico novo salario=%.2f",salario);

    }else{(salario=salario*1.4);
    printf("operador salario=%.2f",salario);}


    return 0;
}
