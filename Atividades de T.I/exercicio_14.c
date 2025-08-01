#include <stdio.h>

void main()
{
    float distancia;
    float litros;
    
    printf("Digite a sua distancia em km: ");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de gasolina que voce gastou: ");
    scanf("%f", &litros);
    
    float consumo = distancia / litros;
    
    printf("voce consumiu %f litros por km/h", consumo);
}