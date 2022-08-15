#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y,g,c,d,m,x,z,e,n;
   printf("informe o ano:");
   scanf("%d",&y);

   g=(y%19)+1;
   c=(y/100)+1;
   x=((3*c)/4)-12;
   z=((8*c+5)/25)-5;
   e=(11*g+20+z-x)%30;
        if (((e==25)&&(g>11))||(e==24)){
        e++;
        }
    n=44-e;

        if(n<21){
            n=n+30;
        }
    d=(((5*y)/4)-(x+10));
    n=((n+7)-((d+n)%7));
        if(n>31){
            n=n-31;
            printf("pascoa: %d de  abril de %d",n,y);
        }else{
            printf("pascoa: %d de  marco de %d",n,y);
      }
    return 0;
}
