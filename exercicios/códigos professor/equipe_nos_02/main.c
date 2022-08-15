#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

int contaPalavras(char texto[]);

// variaveis glogais

int main() {
    setlocale(LC_ALL, "Portuguese");

    char texto[TAM*10];
    char palavra[TAM];


    printf("Digite texto: ");
    scanf("%[^\n]%*c", texto);

    printf("Digite a palavra: ");
    gets(palavra);


    printf("\n#palavras: %d\n", contaPalavras(texto));


    int posicao = comparaProximaPalavra(texto, palavra);
    if(posicao >= 0 ) {
        printf("\nEncontrou a palavra [%s] na posição [%d]\n", palavra, posicao);
    } else {
        printf("\nPalavra %s não foi encontrada no texto!\n", palavra);
    }

    return 0;
}


int contaPalavras(char texto[]) {
    int ind = 0;
    int cont_palavras = 0;
    int encontrouLetra;

     while(ind < strlen(texto)) {
        encontrouLetra = 0;

        // ignora espaços em branco
        while(texto[ind++] == ' ');

        // ignora letras até encontrar algo diferente do alfabeto
        while((toupper(texto[ind++]) >= 'A' && toupper(texto[ind]) <= 'Z') &&  ind < strlen(texto)) {
            encontrouLetra = 1;
        }

        // identificou uma palavra
        if(encontrouLetra) {
            cont_palavras++;
        }
    }

    return cont_palavras;
}


int comparaProximaPalavra(char texto[], char palavra[]) {

    int letraIguais = 0;
    int indTexto = 0;



    while(indTexto <= strlen(texto)-strlen(palavra)) {
        // ignora espaços em branco
        while(texto[indTexto] == 32) {
            indTexto++;
        }


        letraIguais = 0;
        for(int indPalavra=0 ; indPalavra < strlen(palavra); indPalavra++) {
            if(texto[indTexto+indPalavra] == palavra[indPalavra]) {
                letraIguais++;
            }
        }

        printf("Letras iguais %d\n", letraIguais);
        if (letraIguais == strlen(palavra)) {
            return indTexto;
        }
    }

    return -1; // não encontrou

}

