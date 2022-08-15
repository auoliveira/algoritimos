#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double resultado;
    printf("informe as cordadenas do ponto A:");
    scanf ("%lf,%lf",&x1,&y1);
    printf("informe as cordadenas do ponto B:");
    scanf ("%lf,%lf",&x2,&y2);
    resultado=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("a distancia entre os pontos e:%lf",resultado);
    return 0;
}
