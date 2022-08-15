#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,maior=0,menor=0;
    for(int i=0;i<3;i++){
        printf("informe um numero:");
        scanf("%d",&n);
            if(i==0){
                maior=n;
                menor=n;
            }
            if(maior<n){
                maior=n;
            }
            if(menor>n){
                menor=n;
            }
    }
    printf("maior numero=%d\nmenor numero=%d",maior,menor);

}
