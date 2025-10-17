#include <stdio.h>

void DesenhaLinha(int n) {
    for (int i = 0; i < n; i++) {
        printf("=");
    }
    printf("\n");
}

void main() {
    int quantidade;

    printf("Quantos sinais de '=' deseja desenhar? ");
    scanf("%d", &quantidade);

    DesenhaLinha(quantidade);

}
