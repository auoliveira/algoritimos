#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],maior,menor,k=0,y=0;

        printf("informe idade:");
        scanf("%d",&vet[0]);
        maior=vet[0];
        menor=vet[0];
            for(int i=1; i<10; i++){
                printf("informe idade:");
                scanf("%d",&vet[i]);

                if(vet[i]>maior){maior=vet[i];k=i;}
                if(vet[i]<menor){menor=vet[i];y=i;}

        //printf("maior:%d\nmenor:%d\n",maior,menor);
    }

   printf("maior:%d na posição %d\nmenor:%d na posição %d",maior,k,menor,y);
    return 0;
}
