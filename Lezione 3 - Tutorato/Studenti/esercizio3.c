/*
 * Esercizio 3 – Sezione C: Validazione e modifica di una matrice 2D
 * ------------------------------------------------------------------
 * Scrivi una funzione che modifichi una porzione rettangolare di un
 * array bidimensionale A[1000][1000], assegnando un valore specifico
 * a tutti gli elementi compresi tra A[rowStart][colStart] e
 * A[rowEnd][colEnd] (estremi inclusi).
 *
 * Prototipo:
 *   int modifica_matrice(int A[][1000],
 *                        int rowStart, int rowEnd,
 *                        int colStart, int colEnd,
 *                        int value);
 *
 * La funzione deve:
 *   - restituire 1 se i parametri sono validi e la modifica e' avvenuta
 *   - restituire 0 se i parametri non sono validi (senza modificare A)
 *
 * Parametri validi:
 *   - 0 <= rowStart <= rowEnd < 1000
 *   - 0 <= colStart <= colEnd < 1000
 *
 * Nel main:
 *   - Dichiara una matrice A[1000][1000] e inizializzala a zero
 *   - Chiama modifica_matrice con rowStart=2, rowEnd=6,
 *     colStart=3, colEnd=8, value=99
 *   - Stampa un sotto-insieme della matrice per verificare
 *     (es. righe 0-9, colonne 0-11)
 *   - Testa anche un caso con parametri non validi
 */

#include <stdio.h>

#define DIM 1000

/* TODO: implementa la funzione modifica_matrice */
int modifica_matrice(int A[][DIM],
                     int rowStart, int rowEnd,
                     int colStart, int colEnd,
                     int value) {
    /* TODO */
    return 0;
}

int main(void) {
    int A[DIM][DIM];

    /* Inizializzazione a zero */
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            A[i][j] = 0;

    /* TODO: chiama modifica_matrice e verifica il risultato */

    return 0;
}