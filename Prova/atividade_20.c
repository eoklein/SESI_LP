#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
    
    int maior = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

void main() {
    int numeros[] = {3, 7, 2, 9, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("O maior valor é: %d\n", maiorValor(numeros, tamanho));

}
