#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,conta1,conta2,juros,sobra;
    printf("informe o salario:");
    scanf("%f",&salario);
    printf("informe o valor da conta1:");
    scanf("%f",&conta1);
    printf("informe o valor da conta2:");
    scanf("%f",&conta2);
    printf("informe os juros:");
    scanf("%f",&juros);
    sobra=salario-conta1*(1+(juros/100))-conta2*(1+(juros/100));
    printf("saldo apos pagamentos:%.2f",sobra);

    return 0;
}
