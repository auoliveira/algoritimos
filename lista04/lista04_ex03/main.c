#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[10],vetB[10];
    for(int i=0; i<10; i++){
        printf("informe um valor:");
        scanf ("%d",&vetA[i]);
        vetB[i]=vetA[i]*2;
    }
    for(int i=0; i<10; i++){
        printf("valor A:%d velor de B:%d\n ",vetA[i],vetB[i]);
    }

    return 0;
}
