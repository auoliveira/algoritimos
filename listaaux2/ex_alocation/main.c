#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {

    int lin, col, **mat;

    lin = 5;
    col = 3;

    // aloca as linhas da matriz
    mat = malloc(lin * sizeof(int*) );

    // para cada linha aloca as colunas
    for(int i=0; i<lin; i++) {
        mat[i] = malloc(col * sizeof(int) );
    }


    // preenchendo a matriz
    for(int i=0; i<lin; i++) {
        for(int j=0; j<col; j++) {
            mat[i][j] = i+j;
        }
    }


    // imprimir a matriz
    for(int i=0; i<lin; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }




    // para cada linha libera as colunas alocadas
    for(int i=0; i<lin; i++) {
        free(mat[i]);
    }

    // libera as linhas
    free(mat);

    return 0;
}
