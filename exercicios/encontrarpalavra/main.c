#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[1000],palavra[20],aux[100];
    int posicao=0,tam,inicio,contador=0;
    printf("digite um texto:\n");
    gets(texto);

    printf("digite uma palavra:\n");
    gets(palavra);
    tam=strlen(texto);


    for(int i=0;i<tam;i++){
        if (texto[i]!=' '){
            if (palavra[contador]==texto[i]){
            contador++;}
        }else {
            contador=0;}
                if(contador==strlen(palavra)){
                    inicio=i-contador+1;
                }
        }



    printf("%d",inicio);
    return 0;
}
