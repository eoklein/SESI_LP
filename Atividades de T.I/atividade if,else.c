#include <stdio.h>

void main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade <= 20) {
        printf("voce é jovem");
    } else if (idade < 50) {
        printf("voce é adulto");
    } else {
        printf("voce é velho");
    }

}