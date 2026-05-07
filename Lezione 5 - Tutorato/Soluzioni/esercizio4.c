/*
 * Soluzione Esercizio 4
 */

#include <stdio.h>
#include <stdlib.h>

struct persona {
    char cognome[31];
    char nome[31];
    char sesso;
    int  anno_nascita;
};

int main(void) {
    struct persona p;
    int contatore = 0;
    FILE *fp;

    fp = fopen("people.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Errore: impossibile aprire people.dat\n");
        return 1;
    }

    while (fread(&p, sizeof(struct persona), 1, fp) == 1) {
        contatore++;
        printf("Persona %d: %s %s, sesso: %c, nato/a nel: %d\n",
               contatore,
               p.cognome,
               p.nome,
               p.sesso,
               p.anno_nascita);
    }

    fclose(fp);
    printf("\nTotale persone lette: %d\n", contatore);
    return 0;
}
