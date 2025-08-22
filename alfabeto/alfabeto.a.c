#include <stdio.h>

void main(){
    
    int a;
    int b;
    
    printf("Bem vindo a soma ");
    
    printf("\nInsira um valor: ");
    scanf("%d",&a);
    
    printf("Insira outro valor: ");
    scanf("%d",&b);
    
    int soma = a + b;
    printf("%d + %d = %d", a , b , soma);
    
}