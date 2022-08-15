#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("informe um numero:");
    scanf("%d",&n);
        if(n==0){
            printf("_ _ _ _ _");
        }
         if(n==1){
            printf(". _ _ _ _");
        }
         if(n==2){
            printf(". . _ _ _");
        }
         if(n==3){
            printf(". . . _ _");
        }
         if(n==4){
            printf(". . . . _");
        }
         if(n==5){
            printf(". . . . . ");
        }
         if(n==6){
            printf("_ . . . .");
        }
         if(n==7){
            printf("_ _ . . .");
        }
         if(n==8){
            printf("_ _ _ . .");
        }
         if(n==9){
            printf("_ _ _ _ .");
        }



    return 0;
}
