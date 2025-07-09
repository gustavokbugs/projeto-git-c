#include <stdio.h>
#include <locale.h>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#ifndef _O_U8TEXT
#define _O_U8TEXT 0x40000
#endif
#endif

int main() {
    setlocale(LC_ALL, ""); // configura o locale para o sistema
#ifdef _WIN32
    _setmode(_fileno(stdout), _O_U8TEXT); // ajustando o encoding
#endif

    int numeros[5]; // Declara um array para armazenar 5 números inteiros
    int i; // Declara uma variável de controle para os loops

    // Loop para ler 5 números do usuário
    for (i = 0; i < 5; i++) {
        wprintf(L"Digite o %dº número: ", i + 1); // Solicita ao usuário que digite um número
        scanf("%d", &numeros[i]); // Lê o número digitado e armazena no array
    }

    wprintf(L"Você digitou: "); // Exibe uma mensagem antes de mostrar os números digitados
    // Loop para exibir os números digitados pelo usuário
    for (i = 0; i < 5; i++) {
        wprintf(L"%d ", numeros[i]); // Exibe cada número seguido de um espaço
    }
    wprintf(L"\n"); // Quebra de linha ao final da exibição dos números

    return 0;
}