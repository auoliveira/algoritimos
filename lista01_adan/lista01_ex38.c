#include <stdio.h>
#include <stdlib.h>

int main()
{
    float anon,anoa,ia,im,is,id;
    printf("informe o ano de nascimento:");
    scanf("%f",&anon);
    printf("informe o ano atual:");
    scanf("%f",&anoa);
    ia=anoa-anon;
    im=ia*12;
    is=ia*52;
    id=ia*365;
    printf("idade em anos:%.2f\nidade em meses:%.2f\nidade em semanas:%.2f\nidade em dias:%.2f\n",ia,im,is,id);
    return 0;
}
