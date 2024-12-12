#include <stdio.h>
#include <locale.h>

int main()
{
    char a[100], b[100]; 
    
    printf("\n-----------| atividade 6 |-----------\n");
    printf("\n| Digite seu nome e sobrenome |\n\n");
    printf("Nome: ");
    scanf("%s", a);  
    printf("Sobrenome: ");
    scanf("%s", b);  
    
    printf("\nNome completo: %s %s", a, b);
    

}

