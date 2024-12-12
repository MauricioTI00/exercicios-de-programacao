#include <stdio.h>
#include <locale.h>

int main()
{
	int area = 0, raio = 0, x;
	setlocale(LC_ALL,"Portuguese");
	printf("\n-----------| atividade 4 |-----------");
	
	printf("\n\nDigite o raio: ");
	scanf("%d", &x);
	
	raio = x*x;
	area = 3.14159*raio;
	
	printf("\n¡rea = %d", area);
}
