#include <stdio.h>

int main() {
    int numeros[5];
    
    // TODO: Preencha o vetor com 5 números inteiros lidos do teclado
    // Enunciado: Peça ao usuário para digitar 5 números inteiros e armazene no vetor 'numeros'

    for (int i = 0; i < 5; i++) {
        // exemplo de leitura: scanf("%d", &numeros[i]);
    }

    // Exibe os números digitados
    printf("Você digitou: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
