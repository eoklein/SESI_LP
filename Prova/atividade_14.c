#include <stdio.h>

int Primo(int n) {
    int i;
    if (n < 2) return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void main() {
    int num = 0;
    int count = 0;
    int soma = 0;
    int totalLidos = 0;

    while (totalLidos < 10) {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Número inválido (ignorado).\n");
            continue;
        }

        totalLidos++;

        if (Primo(num)) {
            soma += num;
            count++;
        }
    }

    if (count > 0) {
        float media = (float)soma / count;
        printf("Média dos números primos informados: %.2f\n", media);
    } else {
        printf("Nenhum número primo foi informado.\n");
    }

}
