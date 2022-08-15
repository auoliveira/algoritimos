#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorpao;
    double valorbroua;
    double qntpao;
    double qntbroua;
    printf("informe a quantidade de paes vendidas:");
    scanf("%lf",&qntpao);
    printf("infirme o valor do pao no dia:");
    scanf("%lf",&valorpao);
    printf("informe a quantidade de broas vendidas:");
    scanf("%lf",&qntbroua);
    printf("infirme o valor do pao no dia:");
    scanf("%lf",&valorbroua);
    printf("o valor total de vendas e:%0.2f\no valor e ser depositado em poupanca e:%0.2f",valorpao*qntpao+valorbroua*qntbroua,(valorpao*qntpao+valorbroua*qntbroua)*0.1);
    return 0;
}
