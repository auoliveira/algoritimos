#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],menor=0,igual=0,media=0,cont=0,b=0;
    for (int i=0; i<10; i++){
        printf("informe valor:");
        scanf("%d",&A[i]);
        if(A[i]<15){menor=menor+A[i];}
        if(A[i]==15){igual++;}
        if(A[i]>15){cont++;b=b+A[i];}
    }
    media=b/cont;
    printf("soma dos menores que 15=%d\niguais a 15=%d\nmedia=%d",menor,igual,media);
    return 0;
}
