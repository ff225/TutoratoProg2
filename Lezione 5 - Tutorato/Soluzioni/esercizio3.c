/*
 * Soluzione Esercizio 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
    char cognome[31];
    char nome[31];
    char sesso;
    int  anno_nascita;
};

int main(void) {
    struct persona p;
    char buf[64];
    int len;
    int i;
    FILE *fp;

    fp = fopen("people.dat", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Errore: impossibile aprire people.dat\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("\n--- Persona %d ---\n", i + 1);

        printf("Cognome: ");
        fgets(p.cognome, sizeof(p.cognome), stdin);
        len = strlen(p.cognome);
        if (len > 0 && p.cognome[len - 1] == '\n')
            p.cognome[len - 1] = '\0';

        printf("Nome: ");
        fgets(p.nome, sizeof(p.nome), stdin);
        len = strlen(p.nome);
        if (len > 0 && p.nome[len - 1] == '\n')
            p.nome[len - 1] = '\0';

        printf("Sesso (M/F/N): ");
        fgets(buf, sizeof(buf), stdin);
        p.sesso = buf[0];

        printf("Anno di nascita: ");
        fgets(buf, sizeof(buf), stdin);
        p.anno_nascita = atoi(buf);

        fwrite(&p, sizeof(struct persona), 1, fp);
    }

    fclose(fp);
    printf("\nInserimento completato: 3 record scritti in people.dat\n");
    return 0;
}
