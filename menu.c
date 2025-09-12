#include <stdio.h>

// Funções

float chamar() {
    float n;
    printf("Digite o valor: ");
    scanf("%f", &n);
    return n;
}

// Função principal
int main() {
    char operacao;
    float n1, n2, resultado;

    while (1) {
        printf("================================================\n");
        printf("             C A L C U L A D O R A              \n");
        printf("================================================\n");
        printf("Digite a operação desejada (+, -, *, /) ou s para sair: ");
        scanf(" %c", &operacao);

        if (operacao == 's' ) {
            printf("Saindo...\n");
            break;
        }

        if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
            printf("Operação inválida! Tente novamente.\n\n");
            continue;
        }

        n1 = chamar();
        n2 = chamar();

        switch (operacao) {
            case '+':
                resultado = n1 + n2;
                break;
            case '-':
                resultado = n1 - n2;
                break;
            case '*':
                resultado = n1 * n2;
                break;
            case '/':
                resultado = n1 / n2;
                break;
        }

        printf("Resultado: %.2f\n\n", resultado);
    }

    return 0;
}
