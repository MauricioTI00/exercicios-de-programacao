#include <stdio.h>
#include <locale.h>

int main()
{
	int ht, vh, pd, sb, td, sl;
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n-----------| atividade 8 |-----------");
	printf("\n\nResponda o questinario abaixo.\n");
	printf("\nHoras trabalhadas no m�s: ");
	scanf("%d", &ht);
	printf("\nValor da hora trabalhada: ");
	scanf("%d", &vh);
	printf("\nPercentual de desconto: ");
	scanf("%d", &pd);
	
	sb = ht*vh;
	pd = pd/100;
	td = pd*sb;
	sl = sb-td;
	
	printf("Horas trabalhadas: %d\nSal�rio Bruto: %d\nDesconto: %d\nS�lario Liquido: %d", ht, sb, td, sl);
	
	
	
}
