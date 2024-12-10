#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;  // Número de casos de teste
    scanf("%d", &N);  // Lê a quantidade de casos de teste
    
    while (N--) {
        char linha[201];  // Linha de texto (máximo 200 caracteres)
        scanf(" %[^\n]", linha);  // Lê a linha de texto
        
        int contagem[26] = {0};  // Array para contar a frequência das letras
        
        // Processa a linha, contando as letras
        for (int i = 0; i < strlen(linha); i++) {
            if (isalpha(linha[i])) {  // Verifica se o caractere é uma letra
                char letra = tolower(linha[i]);  // Converte a letra para minúscula
                contagem[letra - 'a']++;  // Incrementa a contagem da letra
            }
        }
        
        // Encontra o maior valor de frequência
        int max_frequencia = 0;
        for (int i = 0; i < 26; i++) {
            if (contagem[i] > max_frequencia) {
                max_frequencia = contagem[i];
            }
        }
        
        // Imprime as letras com a maior frequência, em ordem alfabética
        for (int i = 0; i < 26; i++) {
            if (contagem[i] == max_frequencia) {
                printf("%c", 'a' + i);  // Imprime a letra correspondente ao índice
            }
        }
        printf("\n");  // Nova linha após a saída de cada caso de teste
    }

    return 0;
}

