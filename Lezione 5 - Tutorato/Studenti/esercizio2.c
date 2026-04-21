/*
 * Esercizio 2
 *
 * Leggi il file binario "numeri.dat" (prodotto da es1_scrivi.c)
 * e stampa su stdout i valori letti.
 *
 * Hint:
 *   - Apri il file con modalita' "rb"
 *   - fread restituisce il numero di elementi letti:
 *     usalo per sapere quanti valori stampare
 *   - Non sai a priori quanti interi sono nel file:
 *     dimensiona l'array in modo generoso (es. 100 elementi)
 *     e leggi tutto con una sola fread
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeri[100];
    size_t letti;
    int i;
    FILE *fp;

    /* TODO: apri il file "numeri.dat" in lettura binaria */
    fp = /* ??? */;

    /* TODO: controlla se l'apertura ha avuto successo */

    /* TODO: leggi al massimo 100 interi dal file con fread;
     *       salva il numero di elementi letti nella variabile 'letti' */
    letti = /* ??? */;

    /* TODO: chiudi il file */

    /* TODO: stampa i valori letti (usa 'letti' come limite del ciclo) */

    return 0;
}
