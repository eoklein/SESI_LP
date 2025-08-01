#include <stdio.h>

void main()
{
    int num1;
    
    printf("digite o numero q deseja exibir o antecessor e sucessor: ");
    scanf("%d", &num1);
    
    int sucessor = num1 + 1;
    int antecessor = num1 - 1;
    
    printf("seu numero: %d\nantecessor: %d\nsucessor: %d", num1, antecessor, sucessor);
}