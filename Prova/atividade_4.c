#include <stdio.h>

void main() {
 
    float K;
    float L;
    
    printf("Insira o valor em quilogramas: ");
    scanf("%f", &K);
    
    L = K * 0.45;
    
    printf("Resultado em libras: %2.f", L);
    
}