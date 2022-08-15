#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[1000],aux[127]={0};
    int tam;
    printf("digite:\n");
    gets(texto);
    tam=strlen(texto);
    for(int i=0; i<tam;i++){
        if (texto[i]>=0&&texto[i]<=126){
                aux[texto[i]]++;
        }
    }
    for (int i=0;i<=126;i++){
       if(aux[i]>0){
            printf("%c=%d\n",i,aux[i]);
       }
    }

    return 0;
}
