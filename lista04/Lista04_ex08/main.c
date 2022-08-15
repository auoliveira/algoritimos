#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aposta[5],resultado[10],acerto[5],a=0;
    for(int i=0; i<5; i++){
        printf ("informe os numeros da aposta:");
        scanf("%d",&aposta[i]);
        }
    for(int i=0; i<10;i++){
        printf("informe os numeros sorteados:");
        scanf("%d",&resultado[i]);
          for(int j=0;j<5;j++){
                if(resultado[i]==aposta[j]){
                            a++;}
       }}



        printf("numero de acertos%d",a);







    return 0;
}
