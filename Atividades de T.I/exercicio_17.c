#include <stdio.h>

void main()
{
    int vlr1;
    int vlr2;
    int vlr3;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
    
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &vlr3);
    
    int soma = vlr1 + vlr2 + vlr3;
    int media = (vlr1 + vlr2 + vlr3) / 3;
    
    printf("%d + %d + %d = %d\n", vlr1, vlr2, vlr3, soma);
    printf("(%d + %d + %d) / 3 = %d\n", vlr1, vlr2, vlr3, media);
    
    if (vlr1 > vlr2,vlr3) {
        printf("o maior numero é: %d", vlr1);
    } else if (vlr2 > vlr1,vlr3) {
        printf("o maior numero é: %d", vlr2);
    } else {
        printf("o maior numero é: %d", vlr3);
    }
}