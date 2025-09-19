#include <stdio.h>
////////////////exercicio 1/////////////////////
void main() {
	int vetor[5];

	for(int i=0; i < 5; i++) {
		printf("Digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}
    
    printf("Exibe Valores:\n");
    
	for(int i=0; i <= 4; i++) {
		printf("O valor de %d: %d\n",i+1, vetor[i]);
	}
}
//////////////////exercicio 2//////////////////////
void main(){
 
 int vetor[10], soma;
 
 for(int i=0; i < 10; i++) {
		printf("Digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}
 
 for(int i = 0; i < 10; i++) {
        soma += vetor[i];
    }
    
 printf("A soma de todos os vetor é: %d\n", soma);
 
}
///////////////////exercicio 3/////////////////////
void main() {
    int vetor[8];
    int maior, menor;

    for(int i = 0; i < 8; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 8; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior valor do vetor é: %d\n", maior);
    printf("O menor valor do vetor é: %d\n", menor);
}
///////////////////exercicio 4///////////////////////
void main() {
    int vetor[6];
    int soma = 0;
    float media;

    for(int i = 0; i < 6; i++) {
        printf("Digite o valor de %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 6; i++) {
        soma += vetor[i];
    }
    
    media = (float)soma / 6;

    printf("A média é: %.2f\n", media);
}
///////////////////////////////////////////////////////
