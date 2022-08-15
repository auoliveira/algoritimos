#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int j;
    printf("informe um nome:");
    scanf("%s",nome);
    printf("%s",nome);
   for(int i=0; i<nome; i++){
        if(nome[i]=='\o'){
           printf("\n%d",i);
            break;
        }

   }

    return 0;
}
