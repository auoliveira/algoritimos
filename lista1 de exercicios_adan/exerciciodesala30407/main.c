#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1;
    double n2;
    double n3;
    printf("informe numero:");
    scanf("%lf",&n1);
    printf("informe numero:");
    scanf("%lf",&n2);
    printf("informe numero:");
    scanf("%lf",&n3);
    if(((n1<n2)&&(n1<n3))&&(n2<n3)){
        printf("%f\n%f\n%f",n1,n2,n3);
    }else if(((n2<n3)&&(n2<n1))&&(n1<n3)){
        printf("%f\n%f\n%f",n2,n1,n3);
    }else if(((n3<n1)&&(n3<n2))&&(n1<n2)) {
        printf("%f\n%f\n%f",n3,n1,n2);
    }else if(((n3<n1)&&(n3<n2))&&(n2<n1)){
        printf("%f\n%f\n%f",n3,n2,n1);
    }else if(((n1<n2)&&(n1<n3))&&(n3<n2)){
        printf("%f\n%f\n%f",n1,n3,n2);
    } else if(((n2<n3)&&(n2<n1))&&(n3<n1)){
        printf("%f\n%f\n%f",n2,n3,n1);
    }
    return 0;
}
