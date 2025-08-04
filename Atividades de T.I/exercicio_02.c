#include <stdio.h>

void main()
{
    int vlr1;
    int vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
     
    int soma = vlr1 + vlr2;
    
    printf("%d + %d = %d\n", vlr1, vlr2, soma);
}
