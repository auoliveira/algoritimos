#include <stdio.h>
#include <stdlib.h>
void biopark(int y){
    y=y+2;
    printf("%d biopark",y);
}
int main()
{
    int x=2;
    biopark(x);
    printf("%d",x);
    return 0;
}
