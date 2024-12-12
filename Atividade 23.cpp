#include <stdio.h>
#include <locale.h>

int main()
{
	float SL, d5, d10, SB;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 23 |---------------");
	printf("\n\n Digite seu salário bruto: ");
	scanf("%f",&SB);
	
	d10 = (SB*10)/100.0;
	d5 = (SB*5)/100.0;
	SL = SB - d5 - d10;
	
	printf("\nSeu salário líquido: %.2f", SL);
	

}
