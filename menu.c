#include <stdio.h>

// Funções

float chamar() {
    float n;
    printf("Digite o valor: ");
    scanf("%f", &n);
    return n;
}

float somar() {
    float n1 = chamar();
    float n2 = chamar();
    return n1 + n2;
}

float subtrair() {
    float n1 = chamar();
    float n2 = chamar();
    return n1 - n2;
}

float multiplicar() {
    float n1 = chamar();
    float n2 = chamar();
    return n1 * n2;
}

float dividir() {
    float n1 = chamar();
    float n2 = chamar();
    if (n2 == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return n1 / n2;
}


// Função principal
int main() {
    int menu;
    while (1) {
        printf("================================================\n");
        printf("             C A L C U L A D O R A              \n");
        printf("================================================\n");
        printf(" 1 - Somar\n");
        printf(" 2 - Subtrair\n");
        printf(" 3 - Multiplicar\n");
        printf(" 4 - Dividir\n");
        printf(" -----------------------------------------------\n");
        printf(" 5 - Sair\n");
        printf("================================================\n");

        printf("Escolha a opção [1,2,3,4,5]: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                printf("Resultado: %.2f\n\n", somar());
                break;
            case 2:
                printf("Resultado: %.2f\n\n", subtrair());
                break;
            case 3:
                printf("Resultado: %.2f\n\n", multiplicar());
                break;
            case 4:
                printf("Resultado: %.2f\n\n", dividir());
                break;
            case 5:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        printf("\n"); // Espaço entre execuções
    }

    return 0;
}
