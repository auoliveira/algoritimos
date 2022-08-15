#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resp[100]={0},aux[4]={"sim"};

    do{
        printf("ola tudo bem?\n");
         gets(resp);
    }while (strcmp(resp,aux)!=0);

    return 0;
}
