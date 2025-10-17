#include <stdio.h>

void main() {
    float R;
    float G;
    const float PI = 3.14;

    printf("coloque o ângulo em radianos: ");
    scanf("%f", &R);

    G = R * (180 / PI);
    printf("Ângulo em graus: %.2f\n", G);
    
}