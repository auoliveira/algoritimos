#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int TAM = 4;

    char nomes[TAM][50];
    int idades[TAM];

    int idadeMenor;

    printf("Nome: ");
    scanf("%s", nomes[0]);

    printf("Idade: ");
    scanf("%d", &idades[0]);

    // inicio com a menor idade sendo o primeiro elemento
    idadeMenor = idades[0];

    for(int i=1; i<TAM; i++) {
        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        if(idades[i] < idadeMenor) {
            idadeMenor = idades[i];
        }
    }

    for(int i=0; i<TAM && idadeMenor == idades[i]; i++) {
        printf("%s possui a menor idade de %d\n", nomes[i], idades[i]);
    }

    return 0;
}
