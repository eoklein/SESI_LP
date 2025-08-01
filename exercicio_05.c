#include <stdio.h>

int main()
{
    int nascimento;
    int Ano;
    
    printf("Digite o ano em que nasceu: ");
    scanf("%d", &nascimento);
    
    printf("Em que ano estamos?: ");
    scanf("%d", &Ano);
    
    int idade = Ano - nascimento;
    
    printf("Sua idade é: %d", idade);
}