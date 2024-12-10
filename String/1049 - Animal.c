#include <stdio.h>
#include <string.h>

int main() {
    char caracteristica1[20], caracteristica2[20], caracteristica3[20];

    // Leitura das três características
    scanf(" %[^\n]", caracteristica1);
    scanf(" %[^\n]", caracteristica2);
    scanf(" %[^\n]", caracteristica3);

    // Lógica para determinar o animal
    if (strcmp(caracteristica1, "vertebrado") == 0) {
        if (strcmp(caracteristica2, "ave") == 0) {
            if (strcmp(caracteristica3, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(caracteristica3, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(caracteristica2, "mamifero") == 0) {
            if (strcmp(caracteristica3, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(caracteristica3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(caracteristica1, "invertebrado") == 0) {
        if (strcmp(caracteristica2, "inseto") == 0) {
            if (strcmp(caracteristica3, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(caracteristica3, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(caracteristica2, "anelideo") == 0) {
            if (strcmp(caracteristica3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(caracteristica3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
