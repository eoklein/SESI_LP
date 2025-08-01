#include <stdio.h>

void main()
{
    int altura;
    int base;
    
    printf("digite a altura do retangulo: ");
    scanf("%d", &altura);
    
    printf("digite a base do retangulo: ");
    scanf("%d", &base);
    
    int area = base * altura;
    
    printf("a area do retangulo vai ser: %d", area);
}