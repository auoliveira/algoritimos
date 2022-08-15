#include <stdio.h>
#include <stdlib.h>

int main()
{
   float km=0,total=0;
   for(int i=0;total<4000;i++){
        printf("Informe os km percoridos:");
        scanf("%f",&km);
        i++;
       total=km+total;
        printf("vc ja percorreu %.2fkm\n",total);
   }
   printf("Parabens vc chegou ao seu destino");
    return 0;
}
