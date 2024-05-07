#include <stdio.h>
int main(void) {
	float x,y,z;
	printf("Entre com a altura em metros:\n");
	scanf("%f", &x);
	printf("Entre com o peso em kilogramas:\n");
	scanf("%f", &y);
	z = y/(x*x);
	printf("IMC=%.4f\n",z);
	if (z<18.5)
	{
		printf("Abaixo do peso\n");
	}
	else if (z<24.9)
	{
		printf("Peso ideal\n");
	}
	else if (z<29.9)
	{
		printf("Levemente acima do peso\n");
	}
	else if (z<34.9)
	{
		printf("Obesidade grau I\n");
	}
	else if (z<39.9)
	{
		printf("Obesidade grau II\n");
	} 
	else
	{
		printf("Obesidade grau III\n");
	}
	return 0;
}

