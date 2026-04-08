/*
 * Esercizio 2 – Sezione C: Lista di array dinamici
 * --------------------------------------------------
 * Hai a disposizione un array di 5 puntatori a int:
 *
 *   int *data[5];
 *
 * Alloca dinamicamente ciascun sotto-array con calloc in modo che:
 *   data[0] abbia dimensione 1
 *   data[1] abbia dimensione 2
 *   ...
 *   data[i] abbia dimensione i + 1
 *
 * Dopo l'allocazione, inizializza ogni elemento con il valore i * 10
 * (tutti gli elementi del sotto-array data[i] valgono i * 10).
 *
 * Requisiti:
 *   - Dopo ogni calloc, controlla che il risultato non sia NULL.
 *   - Se un'allocazione fallisce, libera tutta la memoria gia'
 *     allocata e termina con codice di errore 1.
 *   - Al termine, stampa il contenuto di tutti i sotto-array.
 *   - Dealloca correttamente tutta la memoria prima di uscire.
 *
 * Hint: calloc(n, sizeof(int)) alloca n interi e li azzera.
 */

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void) {
    int *data[N];

    /* TODO: alloca e inizializza i sotto-array */

    /* TODO: stampa il contenuto */

    /* TODO: dealloca la memoria */

    return 0;
}