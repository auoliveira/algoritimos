#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[100],aux[100];
    int idade, a=100;
    for (int i=0;i<100;i++){
        nome[i]=0;
        aux[i]=0;
    }
    for (int i=0;i<3;i++){
        printf("infore o nome:");
        scanf("%s",nome);
        printf("informe idade:");
        scanf("%d",&idade);
        if(idade<=a){
            a=idade;
            for (int j=0;j<strlen(nome);j++){
                    aux[j]=nome[j];
            }
        }
    }
    printf("nome:%s idade %d",aux,a);
    return 0;
}
