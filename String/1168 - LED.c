#include <stdio.h>
#include <string.h>

int main() {
    // Definindo a quantidade de leds necessária para cada dígito
    int leds_por_digito[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int N;  // Número de casos de teste
    scanf("%d", &N);  // Lê o número de casos de teste
    
    // Processando cada caso de teste
    for (int i = 0; i < N; i++) {
        char numero[101];  // Vetor para armazenar o número (até 101 dígitos)
        scanf("%s", numero);  // Lê o número (como uma string)
        
        int total_leds = 0;
        
        // Percorre cada caractere (dígito) do número
        for (int j = 0; j < strlen(numero); j++) {
            // Converte o caractere para o valor do dígito e soma os LEDs necessários
            total_leds += leds_por_digito[numero[j] - '0'];
        }
        
        // Imprime o resultado
        printf("%d leds\n", total_leds);
    }

    return 0;
}

