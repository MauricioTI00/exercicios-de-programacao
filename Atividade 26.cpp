#include <stdio.h>
#include <locale.h>

int main()
{
 	float n;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 26 |---------------");
	printf("\n\nVou imprimir o valor digitado conforme essa condição: \nF1, se N <= 10 \nF2, se N > 10 e N <= 100\nF3, se N > 100");
	printf("\n\nDigite um Número inteiro: ");
	scanf("%f", &n);
	
	if(n <= 10)
	{
		printf("\nValor = F1");
	}
	if(n > 10 and n <=100)
	{
		printf("\nValor = F2");
	}
	if(n > 100)
	{
		printf("\nValor = F3");
	}
}
