#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

void zeraMatriz(double mat[LIN][COL]);
void imprimeMatriz(double mat[LIN][COL]);
void lerMatriz(double mat[LIN][COL]);
void mediamatriz(double mat [LIN][COL]);
void somamatriz(double mat1[LIN][COL],double mat2[LIN][COL],double matresult[LIN][COL]);
int main() {

    double mat[LIN][COL],matb[LIN][COL],matresult[LIN][COL];

    zeraMatriz(mat);
    lerMatriz(mat);
    printf("informe segunda matrix");
    lerMatriz(matb);
    imprimeMatriz(mat);
    mediamatriz(mat);
    imprimeMatriz(matb);
    mediamatriz(matb);
    somamatriz(mat,matb,matresult);
    imprimeMatriz(matresult);
    mediamatriz(matresult);

    return 0;
}

void zeraMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN; lin++) {
        for(int col=0;col<COL;col++) {
           mat[lin][col] = 0;
        }
    }
}
void imprimeMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
            printf("%.1lf ", mat[lin][col]);
        }
        printf("\n");
    }
}

void lerMatriz(double mat[LIN][COL]) {

    for(int lin=0; lin<LIN ; lin++) {
        for(int col=0; col<COL; col++) {
            printf("MAT[%d][%d]: ",lin, col);
            scanf("%lf", &mat[lin][col]);
        }
    }
}
void mediamatriz(double mat[LIN][COL]){
    double soma=0,media=0;
    for(int lin=0; lin<LIN; lin++){
        for(int col=0; col<COL; col++){
           soma+=mat[lin][col];
        }
    }
    media=soma/(LIN*COL);
    printf("media: %.2f\n",media);
}

void somamatriz(double mat1[LIN][COL],double mat2[LIN][COL],double matresult[LIN][COL]){

     for(int lin=0; lin<LIN; lin++){
        for(int col=0; col<COL; col++){
             matresult[lin][col]=mat1[lin][col]+mat2[lin][col];
        }
    }
}
