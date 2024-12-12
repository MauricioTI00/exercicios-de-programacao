#include <stdio.h>
#include <locale.h>

int main()
{
	int base = 0, altura = 0;
	setlocale(LC_ALL,"Portuguese");
	printf("\n-----------| atividade 5 |-----------");
	
	printf("\n\nDigite o tamanho da base: ");
	scanf("%d", &base);
	printf("\n\nDigite o valor da altura: ");
	scanf("%d", &altura);
	
	printf("\n¡rea = %d", base*altura/2);
}
