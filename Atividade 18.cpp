#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, soma;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 18 |---------------");
	printf("\n\nDigite 1� valor inteiro: ");
	scanf("%d",&a);
	printf("\nDigite 2� valor inteiro: ");
	scanf("%d",&b);
	
	a = a*a;
	b = b*b;
	soma = a+b;
	
	printf("\nA soma dos quadrados de A e B �: %d", soma);
}
