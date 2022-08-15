#include <stdio.h>
#include <stdlib.h>
void ex2 (int mat[3][3],int x);
int main()
{
    int x=3;
    int mat[x][x];
    int d1=0;
    int d2=0;
   ex2(mat,x);
   /* for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("informe o valor da matriz pra posicao de A%d%d=",i+1,j+1);
            scanf("%d",&mat[i][j]);
            if(i==j){
                d1+=mat[i][j];
            } if((i)+(j)==x-1){
                d2+=mat[i][j];

            }
        }
    }printf("\n");
   for (int i=1;i<x+1;i++){
        for(int j=1;j<x+1;j++){
            printf("|%d|",mat[i][j]);
        }printf("\n");
   }
   printf("principal=%d\nsecundaria=%d",d1,d2);*/
    return 0;
}
void ex2 (int mat[3][3],int x){
    int x=3;
     for(int i=1 ; i<x+1; i++){
        for(int j=1; j<x+1; j++){
            if(i==j){
                mat[i][j]=1;
            }
            if(i!=j){
                mat[i][j]=(i*i);
            }
        }
    }
      for (int i=1;i<x+1;i++){
        for(int j=1;j<x+1;j++){
            printf("|%d|",mat[i][j]);
        }printf("\n");
   }
}
