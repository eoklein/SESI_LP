#include <stdio.h>

void main()
{
    float cm;
    
    printf("Digite a quantidade de cm: ");
    scanf("%f", &cm);
    
    float Metros = cm * 100;
    
    printf("A quantidade de Metros é: %f", Metros);
}
