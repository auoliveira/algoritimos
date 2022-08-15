#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,media;
    int alunos;
    printf("informe o numero de alunos:");
    scanf("%d",&alunos);
    for(int i=1;i<alunos+1;i++){
        printf("informe nata 1 do aluno%d:",i);
        scanf("%f",&nota1);
        printf("informe nata 2 do aluno%d:",i);
        scanf("%f",&nota2);
        media=(nota1+nota2)/2;
        if (media>=6){
            printf("media %.2f aprovado\n",media);
        }else {printf("media %.2f reprovado\n",media);
        }

    }
}
