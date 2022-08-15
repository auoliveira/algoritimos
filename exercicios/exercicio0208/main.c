#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int vogais (char texto[]);
int consoante (char texto[]);
int contador (char texto[]);
int main()
{
    int vog=0,con=0,tam=1000,pa=0;
    char texto[1000];

    printf("digite texto:\n");
    gets (texto);
    pa=contador(texto);
    vog=vogais(texto);
    con=consoante(texto);


    printf("%d e %d e %d",vog,con,pa);
   return 0;
}
int vogais (char texto[]){
    int vog=0;
    for (int i=0; i<strlen(texto);i++){

        if (toupper(texto[i])>='A'&& toupper(texto[i])<='Z'){

            if (toupper(texto[i])=='A'||
                toupper(texto[i])=='E'||
                toupper(texto[i])=='I'||
                toupper(texto[i])=='O'||
                toupper(texto[i])=='U'){

                    vog++;
            }
        }
    }
    return vog;
}
int consoante (char texto[]){
    int con=0;
  for (int i=0; i<strlen(texto);i++){
    if (toupper(texto[i])>='A'&& toupper(texto[i])<='Z'){
        if( toupper(texto[i])!='A'&&
            toupper(texto[i])!='E'&&
            toupper(texto[i])!='I'&&
            toupper(texto[i])!='O'&&
            toupper(texto[i])!='U'){
                con++;
        }
    }
  }
  return con;
}
int contador (char texto[]){
    int palavra=1;
    for (int i=0; i<strlen(texto);i++){
        if (texto[i]==' '){
            palavra++;
        }

    }
    return palavra;

}
