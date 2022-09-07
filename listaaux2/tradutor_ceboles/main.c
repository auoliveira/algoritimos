//Tradutor Ceboles
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    char texto[1000];
    int TAM;
    printf("informe um texto:\n");
    gets(texto);
    TAM=strlen(texto);

    for(int i=0;i<TAM;i++){
             if(texto[i]=='r'&&texto[i+1]=='l'){
                texto[i]='u';
            }
        if((texto[i+1]!=' ')&&(texto[i+1]!='\0')){

             if(texto[i]=='r'&&texto[i+1]=='r'){
                for(int j=i+1;j<TAM;j++){
                    texto[j]=texto[j+1];
                }
             }
             if(texto[i]=='r'){
                texto[i]='l';
             }
        }
    }
    for(int i=0;i<TAM;i++){
        printf("%c",texto[i]);
    }

    return 0;
}
