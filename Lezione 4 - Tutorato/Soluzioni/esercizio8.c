/*
 * Esercizio 9 - CLI + Struct + string.h (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[64];
    char cognome[64];
} persona_t;

void stampa_info(persona_t p) {
    printf("Nome completo: %s %s\n", p.nome, p.cognome);

    int lunghezza = strlen(p.nome) + 1 + strlen(p.cognome);
    printf("Lunghezza: %d\n", lunghezza);

    printf("Iniziali: %c.%c.\n", p.nome[0], p.cognome[0]);

    if (strcmp(p.nome, p.cognome) == 0)
        printf("Nome e cognome identici.\n");
    else
        printf("Nome e cognome diversi.\n");
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <nome> <cognome>\n", argv[0]);
        return 1;
    }

    persona_t p;
    strcpy(p.nome,    argv[1]);
    strcpy(p.cognome, argv[2]);

    stampa_info(p);

    return 0;
}
