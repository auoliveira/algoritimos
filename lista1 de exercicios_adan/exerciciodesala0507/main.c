#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vv;
    printf("informe o valor das vendas:");
    scanf("%f",&vv);
    if ((vv*.017+30)<39){
        printf("valor da camissao e 39,00R$");
    }else if(vv<=2500){
        printf("valor da comissao e:%.2fR$",(vv*0.017+30));
    }else if((vv>=2500.01)&&(vv<=6250)){
        printf("valor da comissao e:%.2fR$",(vv*0.0066+56));
    }else if((vv>=6250.01)&&(vv<=20000)){
        printf("valor da comissao e:%.2fR$",(vv*0.0034+76));
    }else if((vv>=20000.01)&&(vv<=50000)){
        printf("valor da comissao e:%.2fR$",(vv*0.0022+100));
    }else if((vv>=50000.01)&&(vv<=500000)){
        printf("valor da comissao e:%.2fR$",(vv*0.0011+155));
    }else if(vv>=500000.01){
        printf("valor da comissao e:%.2fR$",(vv*0.0009+255));
    }
    return 0;
}
