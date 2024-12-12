#include <stdio.h>
#include <locale.h>

int main()
{
	int x, f;
	setlocale(LC_ALL,"Portuguese");
	printf("\n-----------| atividade 9 |-----------");
	
	printf("\n\nDigite a temperatura em graus Celsius (vou converter em Fahrenheit): ");
	scanf("%d", &x);
	
	f = 9*x+160/5;
	
	printf("\nA temperatura convertida é: %d", f);
}
