#include <stdio.h>

void main() {
	int vetor[3];

	for(int i=0; i < 3; i++) {
		printf("Digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}
    
    printf("Exibe Valores:\n");
    
	for(int i=0; i <= 2; i++) {
		printf("O valor de %d: %d\n",i+1, vetor[i]);
	}
}