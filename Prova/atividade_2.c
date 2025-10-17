#include <stdio.h>

void main(){
    
    float K;
    float M;
    
    printf("digite em KM/H:");
    
    scanf("%f", &K);
    
    M = K/3.6;
    printf("A velocidade em metros por segundo é: %.2f\n", M);
    
}