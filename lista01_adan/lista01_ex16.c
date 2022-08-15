#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qnthamb;
    printf("informe a qnt de hamburgueres a ser preparado:");
    scanf("%f",&qnthamb);
    printf("comprar %.2fkg de queijo\ncomprar %.2fkg de presunto\ncomprar %.2fkg de carne",(qnthamb*.1),(qnthamb*.05),(qnthamb*.1));
    return 0;
}
