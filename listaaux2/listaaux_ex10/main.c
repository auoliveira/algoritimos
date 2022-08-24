//Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
//e imprima a media geral.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vet[15],soma=0,media=0;
    for(int i=1;i<=15;i++){
        printf("informe a nota do aluno %d:",i);
        scanf("%lf",&vet[i]);
        soma+=vet[i];
        media++;
    }
    printf("nota media do alunos =%lf",soma/media);
    return 0;
}
