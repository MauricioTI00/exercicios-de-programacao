#include <stdio.h>
#include <locale.h>

int main()
{
 	float a, b;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 25 |---------------");
	printf("\n\nDigite o 1º Número inteiro: ");
	scanf("%f", &a);
	printf("\nDigite o 2º Número inteiro: ");
	scanf("%f", &b);
	
	if(a > b)
	{
		printf("\nMaior valor digitado: %.2f", a);
	}
	else
	{
		printf("\nMaior valor digitado: %.2f", b);
	}
}
