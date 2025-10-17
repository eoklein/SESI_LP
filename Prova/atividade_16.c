#include <stdio.h>

int dobro(int n) {
    return 2 * n;
}

void main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O dobro de %d é %d\n", num, dobro(num));

}
