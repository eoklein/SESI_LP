#include <stdio.h>

void main()
{
    char nomeProduto[100];
    float PreçoUnidade;
    int QuantCompra;
    
    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);
    
    printf("Digite o preço do produto: ");
    scanf("%f", &PreçoUnidade);
    
    printf("Digite a quantidade que vai comprar do produto: ");
    scanf("%d", &QuantCompra);
    
    float total = PreçoUnidade * QuantCompra;
    
    printf("O total da sua compra vai ser: %f", total);
    
}