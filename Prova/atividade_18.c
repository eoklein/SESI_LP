#include <stdio.h>

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

void main() {
    int x = 0;
    int y = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    printf("O maior número é: %d\n", maior(x, y));

}
