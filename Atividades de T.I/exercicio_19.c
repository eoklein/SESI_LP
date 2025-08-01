#include <stdio.h>

void main()
{
    int dolar;
    float cotação;
    
    printf("Quantos dolar voce quer converter em reais: ");
    scanf("%d", &dolar);
    
    printf("Quanto o dolar está valendo em real: ");
    scanf("%f", &cotação);
    
    float converção = dolar * cotação;
    
    printf("voce coventeu %d dolares em %f reais", dolar, converção);
}