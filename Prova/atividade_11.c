#include <stdio.h>

void main() {
    int contador = 10;

    printf("Iniciando contagem regressiva...\n");

    while (contador > 0) {
        printf("%d\n", contador);
        contador--; 
    }

    printf("FIM!\n");

}