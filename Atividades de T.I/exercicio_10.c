#include <stdio.h>

float main()
{
    int vlr1;
    int vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
     
    int soma = vlr1 + vlr2;
    int subtração = vlr1 - vlr2;
    int multi = vlr1 * vlr2;
    float divisao = vlr1 / vlr2;
    
    printf("%d + %d = %d\n", vlr1, vlr2, soma);
    printf("%d + %d = %d\n", vlr1, vlr2, subtração);
    printf("%d x %d = %d\n", vlr1, vlr2, multi);
    printf("%d / %d = %f\n", vlr1, vlr2, divisao);

}
