#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float vv;
    float comissao;
    printf("informe o valor do salario fixo:");
    scanf("%f",&salario);
    printf("informe o valor das vendas:");
    scanf("%f",&vv);
    comissao=vv*.04;
    salario=salario+comissao;
    printf("o valor da comissao foi de:%.2fR$\nO valor do salario mais as comissoes e de:%.2f",comissao,salario);
    return 0;
}
