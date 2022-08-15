#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],aux;
    for(int i=0;i<10;i++){
        printf("informe valor:");
        scanf("%d",&vet[i]);
    }
    for (int x=0;x<10;x++){
        for(int y=x;y<10;y++){
            if(vet[x]>vet[y]){
                aux=vet[x];
                vet[x]=vet[y];
                vet[y]=aux;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("vetor na posicao %d, e:%d\n",i,vet[i]);
    }
    return 0;
}
