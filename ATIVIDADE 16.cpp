#include <stdio.h>
#include <locale.h>

int main()
{
	int x;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 16 |---------------");
	printf("\n\nDigite um valor inteiro: ");
	scanf("%d",&x);

	printf("\n%d�: %d",x ,x*x*x);
	printf("\n%d�: %d",x ,x*x);
}
