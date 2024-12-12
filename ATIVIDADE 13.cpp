#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, c;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 13 |---------------");
	printf("\n\nDigite dois valores inteiros:");
	printf("\n\nValor A: ");
	scanf("%d", &a);
	printf("\nValor B: ");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nValor A: %d (valores invertidos)", a);
	printf("\nValor B: %d (valores invertidos)", b);
	
}
