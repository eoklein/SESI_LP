#include <stdio.h>

void main() {
    
    int numero = 0;
    int positivos = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d° numero: ", i);
        scanf("%d", &numero);
        
        if (numero > 0) {
            positivos++;
        }
    }
    
    printf("São %d\n positivos", positivos);
}
