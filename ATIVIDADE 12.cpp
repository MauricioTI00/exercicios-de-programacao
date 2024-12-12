#include <stdio.h>
#include <locale.h>

int main()
{
	int tempo, velocidade, distancia, litros_usados;
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------| ATIVIDADE 12 |---------------");
	printf("\n\nQuantidade de litros de combustível gasta em uma viagem, por um automóvel que faz 12Km por litro.");
	printf("\nPara realizar esse calculo preciso das seguintes informações: ");
	printf("\n\nTempo gasto (em horas): ");
	scanf("%d",&tempo);
	printf("\nVelocidade média da viagem: ");
	scanf("%d",&velocidade);
	
	distancia = tempo*velocidade;
	litros_usados = distancia/12;
	
	printf("\nQuantidade de litros utilizada na viagem: %d \nVelocidade média: %d: \nTempo gasto na viagem: %d \nDistância percorrida: %d", litros_usados, velocidade, tempo, distancia);
	
}
