#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b;
	
	printf("\n-----------| atividade 7 |-----------");
	printf("\nQuais números deseja somar?\n");
	printf("1º Número: ");
	scanf("%d", &a);
	printf("2º Número: ");
	scanf("%d", &b);
	printf("\n%d + %d = %d", a, b, a+b);
}
