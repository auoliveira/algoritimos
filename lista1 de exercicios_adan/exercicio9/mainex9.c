#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camisaP;
    int camisaM;
    int camisaG;
    printf("informe qnt camisas P:");
    scanf("%d",&camisaP);
    printf("informe qnt camisas M:");
    scanf("%d",&camisaM);
    printf("informe qnt camisas G:");
    scanf("%d",&camisaG);
    printf("faram arrecadados %dR$",camisaP*10+camisaM*12+camisaG*15);
    return 0;
}
