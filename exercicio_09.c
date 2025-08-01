#include <stdio.h>

void main()
{
    float graus;
    
    printf("Digite a quantidade de graus: ");
    scanf("%f", &graus);
    
    float fahrenheit = (graus * 1.8) + 32;
    
    printf("A quantidade de Fahrenheit é: %f", fahrenheit);
}