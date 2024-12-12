#include <stdio.h>
#include <locale.h>

int main()
{
	float kmh, mts;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 21 |---------------");
	printf("\n\nDigite a velocidade do veículo em km/h: ");
	scanf("%f",&kmh);
	
	mts = kmh/3.6;
	
	printf("\nkm/h para m/s = %.2f", mts);
}
