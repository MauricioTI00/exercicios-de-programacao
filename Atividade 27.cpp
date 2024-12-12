#include <stdio.h>
#include <locale.h>

int main()
{
 	float p1, p2, p3, med;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 27 |---------------");
	printf("\n\nAdicione suas notas em determinadas provas:\n\n");
	do
	{
		printf("1º Prova: ");
		scanf("%f", &p1);
		if(p1 > 2)
		{
			printf("Nota invalida.\n\n");
		}
	} while(p1 > 2);
	do
	{
		printf("2º Prova: ");
		scanf("%f", &p2);
		if(p2 > 3)
		{
			printf("Nota invalida.\n\n");
		}
	} while(p2 > 3);
	do
	{
		printf("3º Prova: ");
		scanf("%f", &p3);
		if(p3 > 5)
		{
			printf("Nota invalida.\n\n");
		}
	} while(p3 > 5);
	
	med = (p1*5+p2*3.33+p3*2)/3;
	
	printf("\nMédia do aluno: %.2f", med);
}

