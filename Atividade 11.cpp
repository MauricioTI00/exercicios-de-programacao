#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y, z;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 11 |---------------");
	printf("\n\nPara realizar esse calculo preciso das seguintes informações: \n(pi = 3,14159)");
	printf("\n\nValor do raio: ");
	scanf("%d",&x);
	printf("\nvalor da altura: ");
	scanf("%d",&y);
	
	x = x*x;
	z = 3.14159*x*y;
	
	printf("\nVOLUME = %d", z);
	
}
