#include <stdio.h>
#include <locale.h>

int main()
{
 	int CodigoA, CodigoB, CodigoC, CodigoD, CodigoE, DigitoV, S;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 24 |---------------");
	printf("\n\nDigite um código de cinco algarismos: \n");
	scanf("%d %d %d %d %d",&CodigoA, &CodigoB, &CodigoC, &CodigoD, &CodigoE);
	
	S = 6*CodigoA + 5*CodigoB + 4*CodigoC + 3*CodigoD + 2*CodigoE;
	DigitoV = S % 7;
	
	printf("\nDigito verificador: %d", DigitoV);
}
