#include <stdio.h>
#include <locale.h>

int main()
{
	int Int1, Int2, quociente, resto;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 22 |---------------");
	printf("\n\nDigite o dividendo: ");
	scanf("%d",&Int1);
	printf("\n\nDigite o divisor: ");
	scanf("%d",&Int2);
	
	quociente = Int1/Int2;
	
	printf("\nQuociente: %d", quociente);
	
	resto = Int1 - (Int2*quociente);
	
	printf("\nResto da divisão inteira: %d", resto);
}
