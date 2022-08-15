#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int n,aux,j,cod;
    printf("informe numero:");
    scanf("%d",&n);
    aux=n;
    for( int i=1;aux>=1;i++){
        aux=aux/10;
        j=i;
    }
    int aux2=j;
    aux=n;

    for(int i=0;i<aux2;i++){

     cod=aux/pow(10,--j);
     //printf("%d\n",cod);

      if(cod==0){
            printf("_ _ _ _ _ ");
        }
         if(cod==1){
            printf(". _ _ _ _ ");
        }
         if(cod==2){
            printf(". . _ _ _ ");
        }
         if(cod==3){
            printf(". . . _ _ ");
        }
         if(cod==4){
            printf(". . . . _ ");
        }
         if(cod==5){
            printf(". . . . . ");
        }
         if(cod==6){
            printf("_ . . . . ");
        }
         if(cod==7){
            printf("_ _ . . . ");
        }
         if(cod==8){
            printf("_ _ _ . . ");
        }
         if(cod==9){
            printf("_ _ _ _ . ");
        }

     aux=aux%(int)pow(10,j);
    }
    return 0;
}
