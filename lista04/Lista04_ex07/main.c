#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r[5],s[10],x[5],t=0;
    for(int i=0; i<10; i++){
        printf ("informe valor pra vetor s:");
        scanf("%d",&s[i]);
        }
    for(int i=0; i<5;i++){
        printf("informe valor para vetor r:");
        scanf("%d",&r[i]);

       for(int j=0; j<10; j++){
           if(r[i]==s[j]){x[t]=r[i];
       t++;}
       }


    }
    for(int i=0; i<t;i++){
        printf("[%d]",x[i]);
    }






    return 0;
}
