/*
 * Esercizio 1
 *
 * Dichiara un array di 5 interi con valori a tua scelta e
 * scrivilo su un file binario "numeri.dat".
 *
 * Hint:
 *   - Apri il file con modalita' "wb"
 *   - Usa sizeof(int) come parametro 'size' di fwrite
 *   - Controlla sempre che fopen non restituisca NULL
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeri[5] = {10, 20, 30, 40, 50};
    FILE *fp;

    /* TODO: apri il file "numeri.dat" in scrittura binaria */
    fp = /* ??? */;

    /* TODO: controlla se l'apertura ha avuto successo;
     *       in caso di errore stampa su stderr e termina */

    /* TODO: scrivi l'intero array su file con fwrite */

    /* TODO: chiudi il file */

    printf("Scrittura completata.\n");
    return 0;
}
