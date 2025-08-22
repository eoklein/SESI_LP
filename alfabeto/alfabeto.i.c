#include <stdio.h>

void main(){
    
    int a;
    int b;
    
    printf("Insira numero: ");
    scanf("%d",&a);
    
    printf("Insira numero: ");
    scanf("%d",&b);
    
     if (a > b) {
        printf("O maior número é: %d\n", a);
    } else if (b > a) {
        printf("O maior número é: %d\n", b);
    } else {
        printf("Os dois números são iguais.\n");
    }
    
}