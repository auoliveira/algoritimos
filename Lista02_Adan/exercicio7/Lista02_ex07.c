#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float h;
    printf("iforme o sexo do paciente digite (m)para masculino ou (f) para feminino:");
	scanf("%c",&sexo);
	printf("informe a altura:");
	scanf("%f",&h);
	if (sexo=='m'){printf("por ser Homem peso ideal e:%.2fkg",(72.7*h)-58);
	}else
	printf("por ser mulher peso ideal e:%.2fkg",(h*62.1)-44.7);


    return 0;
}
