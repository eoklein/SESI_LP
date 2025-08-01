#include <stdio.h>

void main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    int dias = idade * 365;
    
    printf("Seus dias vividos são: %d", dias);
}