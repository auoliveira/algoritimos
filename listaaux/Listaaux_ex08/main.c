#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,aux=0;
    do{
        printf("informe um numero:");
        scanf("%d",&N);
        aux=N;
        if(aux%2==0){
        printf("informe um numero impar!\n");
        }
    } while(aux>0 && aux%2==0);

    for(int j=0;j<N;j++){
        for(int i=1;i<N+1;i++){
            if((i==j+1)||(i==N-j)){
                    printf("*");
            }else{printf(" ");
            }
        }printf("\n");
    }

    return 0;
}
