#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, soma;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 17 |---------------");
	printf("\n\nDigite 1� valor inteiro: ");
	scanf("%d",&a);
	printf("\nDigite 2� valor inteiro: ");
	scanf("%d",&b);
	
	soma = a+b;
	
	printf("\n%d� = %d", soma, soma*soma);
}
