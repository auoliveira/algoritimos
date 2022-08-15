#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hr;


    printf("informe a quantidade horas trabalhadas:");
    scanf("%f",&hr);
    if(hr<=244){
            printf("salario%.2f",(hr*10)-((hr*10)*.1));
    }else if(hr>244){
        printf("salario%.2f",(2440+(hr-244)*15)-((2440+(hr-244)*15)*.1));
        }
    return 0;
}
