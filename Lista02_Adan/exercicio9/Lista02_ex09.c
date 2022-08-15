#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float n1=0,n2=0,n3=0,m=0;
    printf(" aluno FULANO  cod:1234\n");
  do{printf("informe cod aluno:");
        scanf("%d",&cod);
        if(cod==1234){printf("informe a nota1:");
                     scanf("%f",&n1);
                     printf("informe a nota2:");
                     scanf("%f",&n2);
                     printf("informe a nota3:");
                     scanf("%f",&n3);
            m=((n1+n2+n3)/3);
            printf("%.2lf",m);
            if(m>=7){printf("aprovado");
            }else if((m>=4.5)&&(m<7)){printf("recuperacao");
            }else if(m<4.5){printf("reprovado");
            }
        }printf("cod errado repta o cod\n");

    }while(cod!=1234);





    return 0;
}
