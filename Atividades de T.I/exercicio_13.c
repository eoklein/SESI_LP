#include <stdio.h>

void main()
{
    float preço;
    float desconto;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preço);
    
    printf("Digite o desconto: ");
    scanf("%f", &desconto);
    
    float valorDesconto = preço * desconto / 100;
    float preçoFinal = preço - valorDesconto;
    
    printf("Valor descontado: %f\nNovo valor: %f", valorDesconto, preçoFinal);
}