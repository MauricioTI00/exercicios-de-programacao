#include <stdio.h>
#include <locale.h>

int main()
{
	int NumA, NumB;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 20 |---------------");
	printf("\n\nDigite 1º valor inteiro: ");
	scanf("%d",&NumA);
	printf("\nDigite 2º valor inteiro: ");
	scanf("%d",&NumB);
	
	printf("\nValores: \n%d \n%d", NumB, NumA);
}
