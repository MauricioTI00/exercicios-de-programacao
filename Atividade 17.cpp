#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, soma;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 17 |---------------");
	printf("\n\nDigite 1º valor inteiro: ");
	scanf("%d",&a);
	printf("\nDigite 2º valor inteiro: ");
	scanf("%d",&b);
	
	soma = a+b;
	
	printf("\n%d² = %d", soma, soma*soma);
}
