/*
 * Esercizio 5 - Stringhe
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Leggere una stringa da terminale e stamparne:
 * - la lunghezza
 * - i caratteri in ordine inverso
 * - il numero di vocali
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 101  /* 100 caratteri utili + terminatore */

/* Restituisce il numero di vocali (a e i o u, maiuscole e minuscole)
 * presenti nella stringa s */
int conta_vocali(const char *s) {
    /* TODO */
}

/* Stampa i caratteri della stringa s in ordine inverso,
 * seguiti da un newline */
void stampa_al_contrario(const char *s) {
    /* TODO */
}

int main(void) {
    char s[MAX_LEN];

    printf("Inserisci una stringa: ");

    /* TODO:
     * - Leggere la stringa con fgets
     * - Rimuovere il '\n' finale
     * - Stampare lunghezza, stringa al contrario e numero di vocali
     */

    return 0;
}
