#include <stdio.h>

float main()
{
    float nota1;
    float nota2;
    float nota3;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    
    float Media = (nota1 + nota2 + nota3) / 3;
    
    printf("A sua média é: %.2f", Media);
}