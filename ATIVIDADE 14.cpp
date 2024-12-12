#include <stdio.h>
#include <locale.h>

int main()
{
	int a, b, c, d;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 14 |---------------");
	printf("\n\nDigite 4(quatro) valores inteiros:");
	printf("\n\nValor A: ");
	scanf("%d", &a);
	printf("\nValor B: ");
	scanf("%d", &b);
	printf("\nValor C: ");
	scanf("%d", &c);
	printf("\nValor D: ");
	scanf("%d", &d);
	
	printf("\nSomadas: \n%d + %d = %d \n%d + %d = %d \n%d + %d = %d \n%d + %d = %d \n%d + %d = %d \n%d + %d = %d", a, b, a+b, a, c, a+c, a, d, a+d, b, c, b+c, b, d, b+d, c, d, c+d);
	printf("\n\nMultiplicadas: \n%d X %d = %d \n%d X %d = %d \n%d X %d = %d \n%d X %d = %d \n%d X %d = %d \n%d X %d = %d", a, b, a*b, a, c, a*c, a, d, a*d, b, c, b*c, b, d, b*d, c, d, c*d);
}
