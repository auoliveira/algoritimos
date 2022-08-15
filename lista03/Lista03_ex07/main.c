#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,maior=0;
    for(int i=0;i<20;i++){
        printf("informe idade:");
        scanf("%d",&idade);
        if(idade>=18){
            maior++;
        }
    }
    printf("\nsao maiores %d pessoas",maior);
    return 0;
}
