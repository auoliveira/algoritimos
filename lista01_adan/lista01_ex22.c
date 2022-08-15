#include <stdio.h>
#include <stdlib.h>

int main()
{
    float q1c,q5c,q10c,q25c,q50c,q1r;
    printf("informe a quanidade de moedas de 1centavo:");
    scanf("%f",&q1c);
    printf("informe a quanidade de moedas de 5centavos:");
    scanf("%f",&q5c);
    printf("informe a quanidade de moedas de 10centavos:");
    scanf("%f",&q10c);
    printf("informe a quanidade de moedas de 25centavos:");
    scanf("%f",&q25c);
    printf("informe a quanidade de moedas de 50centavos:");
    scanf("%f",&q50c);
    printf("informe a quanidade de moedas de 1real:");
    scanf("%f",&q1r);
    printf("o valor total e de: %.2fR$",(q1c*.01+q5c*.05+q10c*.1+q25c*.25+q50c*.5+q1r*1));

    return 0;
}
