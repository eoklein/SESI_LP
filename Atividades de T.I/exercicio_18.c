#include <stdio.h>

void main()
{
    float votosA;
    float votosB;

    printf("Digite o número de votos A: ");
    scanf("%f", &votosA);

    printf("Digite o numero de votos B: ");
    scanf("%f", &votosB);

    int totalVotos = votosA + votosB;
    float percentualA = (votosA / totalVotos) * 100;
    float percentualB = (votosB / totalVotos) * 100;

    printf("Total de votos = %d\nsendo votosA = %.2f%%\nvotosB = %.2f%%\n", totalVotos, percentualA, percentualB);

}