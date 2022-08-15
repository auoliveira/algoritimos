#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,c;

    for(int i=0; i<20; i++){
    printf("informe um numero:");
    scanf("%d",&num);
        if((num>=0)&&(num<=100)){
        a++;
        }else if((num>=101)&&(num<=200)){
        b++;
        }else if(num>200){
        c++;
        }
    }
    printf("\n%d entao entre o intervalo de 0-100",a);
    printf("\n%d entao entre o intervalo de 101-200",b);
    printf("\n%d maior que 200",c);
    return 0;
}
