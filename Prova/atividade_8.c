#include <stdio.h>

void main() {
    float preco;
    float novoPreco;

    printf("Digite o preço antigo do produto: ");
    scanf("%f", &preco);

    if (preco <= 50)
        novoPreco = preco + (preco * 0.05);
    else if (preco > 50 && preco <= 100)
        novoPreco = preco + (preco * 0.10);
    else
        novoPreco = preco + (preco * 0.15);

    printf("Preço novo: R$ %.2f\n", novoPreco);

    if (novoPreco <= 80)
        printf("Mensagem: Barato\n");
    else if (novoPreco > 80 && novoPreco <= 120)
        printf("Mensagem: Normal\n");
    else if (novoPreco > 120 && novoPreco <= 200)
        printf("Mensagem: Caro\n");
    else
        printf("Mensagem: Muito caro\n");

}