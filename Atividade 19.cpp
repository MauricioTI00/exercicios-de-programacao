#include <stdio.h>
#include <locale.h>

int main()
{
	int val1, val2, med;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 18 |---------------");
	printf("\n\nDigite 1� valor inteiro: ");
	scanf("%d",&val1);
	printf("\nDigite 2� valor inteiro: ");
	scanf("%d",&val2);
	
	med = (val1+val2)/2;
	
	printf("\nM�dia = %d", med);
}
