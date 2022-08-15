#include <stdio.h>
#include <stdlib.h>
void soma(int vet1[5], int vet2[5]);
int main()
{

      int vet1[5],vet2[5];

      for(int i=0;i<5;i++){
        printf("informe o vetor 1\n:");
        scanf("%d",&vet1[i]);
      }
      for(int i=0;i<5;i++){
        printf("informe o vetor 2:\n");
        scanf("%d",&vet2[i]);
      }
      soma(vet1,vet2);
    return 0;
}
void soma(int vet1[5], int vet2[5]){
        int soma[5];
        for(int i=0; i<5; i++){
            soma[i]=vet1[i]+vet2[i];
            printf("[%d]\n",soma[i]);
        }
}

