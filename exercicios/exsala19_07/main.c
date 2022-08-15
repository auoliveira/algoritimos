#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],maior=0,menor;

    for (int i=0; i <10; i++){
         printf ("infome um valor:");
         scanf("%d",&vetor[i]);
    }
    menor = vetor[0];
      for (int i=0; i <10; i++){
        if (vetor[i]>maior){maior=vetor[i];
        }else if(vetor[i]<menor){menor=vetor[i];
        }
    }
        printf ("maior %d\nmenor %d",maior,menor);
    return 0;
}
