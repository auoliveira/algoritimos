#include <stdio.h>
#include <stdlib.h>

int main()
{
     float menor, maior,altura;
    for(int i=0;i<15;i++){
        printf("informe a altura da %d:",(i+1));
        scanf("%f",&altura);
        if (i==0){
            maior=altura;
            menor=altura;
        }
        if (altura>maior){
            maior=altura;
        }
        if (altura<menor){
            menor=altura;
        }
    }
    printf("maior altura e %.2fm\nmenor altura e %.2fm",maior,menor);

    return 0;
}
