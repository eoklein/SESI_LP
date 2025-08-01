#include <stdio.h>

int main()
{
    float vlr1;
    float vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%f", &vlr2);
     
    int soma = vlr1 + vlr2;
    
    printf("%d + %d = %d\n", vlr1, vlr2, soma);
}