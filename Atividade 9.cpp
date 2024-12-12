#include <stdio.h>
#include <locale.h>

int main()
{
    int x, c;
    float a, b;

    setlocale(LC_ALL, "Portuguese");

    printf("\n-----------| Atividade 10 |-----------");

    printf("\n\nDigite a temperatura em Fahrenheit (vou converter em Celsius): ");
    scanf("%d", &x);

    a = x - 32;
    b = 5.0 / 9.0;  
    c = a * b;      

    printf("\nA temperatura convertida é: %d", c); 
}

