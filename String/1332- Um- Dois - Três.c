#include <stdio.h>
#include <string.h>

int comparar_palavras(const char* palavra1, const char* palavra2) {
    int diferencas = 0;
    int tamanho = strlen(palavra1);
    
    for (int i = 0; i < tamanho; i++) {
        if (palavra1[i] != palavra2[i]) {
            diferencas++;
        }
    }
    
    return diferencas;
}

int main() {
    int n;  // Número de palavras que o irmão escreveu
    scanf("%d", &n);
    
    // Definir as palavras possíveis e seus valores
    const char* palavras[3] = {"one", "two", "three"};
    int numeros[3] = {1, 2, 3};
    
    // Processar cada palavra escrita
    for (int i = 0; i < n; i++) {
        char palavra[6];  // A palavra pode ter no máximo 5 letras
        scanf("%s", palavra);
        
        // Comparar com as três palavras possíveis
        for (int j = 0; j < 3; j++) {
            if (comparar_palavras(palavra, palavras[j]) <= 1) {
                // Se a diferença for no máximo 1 letra, encontramos a palavra
                printf("%d\n", numeros[j]);
                break;
            }
        }
    }

    return 0;
}
