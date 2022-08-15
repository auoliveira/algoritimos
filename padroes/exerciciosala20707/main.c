#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, acu;
    printf("informe um numero:");
    scanf("%d", &n);

    for(i=0; i <= 10; i++){
    acu = n* i;
    printf(" %d x %d = %d\n",n,i, acu);
}






    return 0;
}
