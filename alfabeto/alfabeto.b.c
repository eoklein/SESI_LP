#include <stdio.h>

void main(){
    
    float a;
    float b;
    float c;
   
    printf("insira sua primeira nota: ");
    scanf("%f",&a);
    
    printf("insira sua segunda nota: ");
    scanf("%f",&b);
    
    printf("insira sua terceira nota: ");
    scanf("%f",&c);
    
     float media = (a + b + c) /3;
    printf("%f + %f + %f = %f ",a,b,c,media);
    
}