#include <stdio.h>
#include <stdlib.h>
void tabuada(int n){
    for (int i=0;i<11;i++){
        printf("%dx%d=%d\n",n,i,(n*i));
    }
    }
void todas(){
    for(int i=1;i<11;i++){printf("\n");
    tabuada(i);
    }
}
int main()
{
    //int n=1;

    todas();
    return 0;
}
