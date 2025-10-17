#include <stdio.h>

void main(){
    
    int vlr1;
    int vlr2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &vlr1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &vlr2);
    
    
    if (vlr1 > vlr2) {
        printf("o maior numero é: %d", vlr1);
    } else if (vlr2 > vlr1) {
        printf("o maior numero é: %d", vlr2);
    }
}