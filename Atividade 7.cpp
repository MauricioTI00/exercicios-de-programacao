#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b;
	
	printf("\n-----------| atividade 7 |-----------");
	printf("\nQuais n�meros deseja somar?\n");
	printf("1� N�mero: ");
	scanf("%d", &a);
	printf("2� N�mero: ");
	scanf("%d", &b);
	printf("\n%d + %d = %d", a, b, a+b);
}
