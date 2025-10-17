#include <stdio.h>

void main() {
    int N;

    do {
        printf("Digite um número inteiro positivo e ímpar: ");
        scanf("%d", &N);

        if (N <= 0 || N % 2 == 0) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (N <= 0 || N % 2 == 0);

    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}
