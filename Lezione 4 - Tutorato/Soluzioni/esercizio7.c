/*
 * Esercizio 7 - CLI + Struct (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[64];
    char cognome[64];
} persona_t;

void stampa_saluto(persona_t p) {
    printf("Ciao, %s %s!\n", p.nome, p.cognome);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <nome> <cognome>\n", argv[0]);
        return 1;
    }

    persona_t p;
    strcpy(p.nome,    argv[1]);
    strcpy(p.cognome, argv[2]);

    stampa_saluto(p);

    return 0;
}
