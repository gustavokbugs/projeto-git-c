#include <stdio.h>

int main() {
    int numeros[5];  // Declara um vetor de 5 inteiros

    // Lê 5 números inteiros do usuário e armazena no vetor
    // Usamos um laço for para evitar escrever scanf várias vezes
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);  // Armazena cada número na posição correspondente do vetor
    }

    // Exibe os números digitados
    // Aqui usamos outro laço for para percorrer o vetor e imprimir cada valor
    printf("Você digitou: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);  // Mostra o valor armazenado em cada posição do vetor
    }
    printf("\n");

    return 0;  // Indica que o programa terminou corretamente
}
