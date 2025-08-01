#include <stdio.h>

void main()
{
    float distancia;
    float horas;
    
    printf("Digite a sua distancia em km: ");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de tempo que voce gastou em horas: ");
    scanf("%f", &horas);
    
    int velocidade = distancia / horas;
    
    printf("km/h: %d", velocidade);
}