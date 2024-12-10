#include <stdio.h>
#include <string.h>

// Função para verificar o vencedor entre Rajesh e Sheldon
const char* vencedor(const char* escolha1, const char* escolha2) {
    // Definir as regras de vitória em um dicionário de pares
    if (strcmp(escolha1, escolha2) == 0) {
        return "empate";
    }

    // Tesoura corta Papel, Tesoura prende Lagarto
    if ((strcmp(escolha1, "tesoura") == 0 && (strcmp(escolha2, "papel") == 0 || strcmp(escolha2, "lagarto") == 0)) ||
        (strcmp(escolha1, "papel") == 0 && (strcmp(escolha2, "pedra") == 0 || strcmp(escolha2, "spock") == 0)) ||
        (strcmp(escolha1, "pedra") == 0 && (strcmp(escolha2, "lagarto") == 0 || strcmp(escolha2, "tesoura") == 0)) ||
        (strcmp(escolha1, "lagarto") == 0 && (strcmp(escolha2, "spock") == 0 || strcmp(escolha2, "papel") == 0)) ||
        (strcmp(escolha1, "spock") == 0 && (strcmp(escolha2, "tesoura") == 0 || strcmp(escolha2, "pedra") == 0))) {
        return "rajesh";
    }

    return "sheldon";  // Se não for Rajesh, é Sheldon quem vence
}

int main() {
    int C;  // Número de casos de teste
    scanf("%d", &C);
    
    for (int i = 0; i < C; i++) {
        char escolha1[10], escolha2[10];  // Para armazenar as escolhas de Rajesh e Sheldon
        scanf("%s %s", escolha1, escolha2);  // Leitura das escolhas
        
        // Determinar o vencedor ou empate
        const char* resultado = vencedor(escolha1, escolha2);
        printf("%s\n", resultado);  // Imprime o resultado
    }

    return 0;
}
