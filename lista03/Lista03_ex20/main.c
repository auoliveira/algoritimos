#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntc=0,qntg=0;
    char esp;
    for (int i=0;i<5;i++){

        printf("informe o tipo de animal, digite 'g' para gato ou 'c' para cao:");
        scanf("%c",&esp);
        fflush(stdin);
            if(esp=='c'){
                qntc++;
            }
            if(esp=='g'){
                qntg++;

            }
    printf("\n%d",i);
    }

    printf("\na quantidade total de animais na loja e:%d\nsendo %d gatos\nsendo %d cao",(qntc+qntg),qntg,qntc);
    return 0;
}
