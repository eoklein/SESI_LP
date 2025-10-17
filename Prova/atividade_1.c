#include <stdio.h>

void main(){
    
    float C;
    float F;
    
    printf("digite a temperatura em celcius: ");
    scanf("%f", &C);
    
    F = (C * (9.0/5.0)) + 32.0;
    printf("Temperatura em fahrenheit:%.2f\n ", F);
    
}