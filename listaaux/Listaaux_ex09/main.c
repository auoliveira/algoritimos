#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,M,R,pot;
        printf("informe o numero:");
        scanf("%d",&N);
        printf("informe a base:");
        scanf("%d",&M);
        pot = 1;
        for(int resto = N; resto > 0;){
           R = R + ((resto%M)*pot);
           pot = pot*10;
           resto = resto/M;
        }
    printf("%d",R);


    return 0;
}
