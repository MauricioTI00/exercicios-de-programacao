#include <stdio.h>
#include <locale.h>

int main()
{
	int x, y, z, v;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 11 |---------------");
	printf("\n\nPara realizar esse calculo preciso das seguintes informações: ");
	printf("\n\nValor do comprimento: ");
	scanf("%d",&x);
	printf("\nvalor da largura: ");
	scanf("%d",&y);
	printf("\nvalor da altura: ");
	scanf("%d",&z);
	
	v = x*y*z;
	
	printf("\nVOLUME = %d", v);
	
}
