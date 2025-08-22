#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%f", &peso);

    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade Grau I\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade Grau II\n");
    } else {
        printf("Obesidade Grau III, se cuide home!\n");
    }

    return 0;
}
