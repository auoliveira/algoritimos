#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pt=0,p3=0,p5=0,p8=0,p11=0,p13=0;
    int pe=0,canal,total=0;

    printf("para encerrar a pesquisa digite '0' para canal\n\n");
    for(int i=1;;i++){
        pe++;
        printf("informe o canal 3,5,8,11 ou 13:");
        scanf("%d",&canal);
        printf("informe a quantas pessoas assistiam o canal:");
        scanf("%f",&pt);

        if(canal==0){
            break;
      }
        if(canal==3){
                p3=pt+p3;

            }
        if(canal==5){
                p5=pt+p5;
            }
        if(canal==8){
                p8=pt+p8;
            }
        if(canal==11){
                p11=pt+p11;
            }
        if(canal==13){
                p13=pt+p13;
            }
    total=pt+total;
    }
    printf("\n\n\n%.1f pessoas assistiam ao canal 03, com ibote de %.2f%\n",p3,(p3/total)*100);
    printf("\n%.1f pessoas assistiam ao canal 05, com ibote de %.2f%\n",p5,(p5/total)*100);
    printf("\n%.1f pessoas assistiam ao canal 08, com ibote de %.2f%\n",p8,(p8/total)*100);
    printf("\n%.1f pessoas assistiam ao canal 11, com ibote de %.2f%\n",p11,(p11/total)*100);
    printf("\n%.1f pessoas assistiam ao canal 13, com ibote de %.2f%\n",p13,(p13/total)*100);
    printf("\npessoas entrevistadas %d\n",pe-1);
    printf("pessoas totais %d",total);
    return 0;
}
