/*
 * Esercizio 4 – Sezione C: Funzione borderSum
 * ---------------------------------------------
 * Scrivi una funzione borderSum che calcoli la somma degli elementi
 * sul BORDO della sottomatrice quadrata n x n in alto a sinistra
 * di una matrice mat[26][26].
 *
 * Per "bordo" si intendono gli elementi della prima riga, dell'ultima
 * riga, della prima colonna e dell'ultima colonna della sottomatrice.
 *
 * Prototipo:
 *   int borderSum(int mat[][26], int n);
 *
 * Casi particolari:
 *   - n = 0 -> restituisce 0
 *   - n = 1 -> restituisce mat[0][0]
 *
 * Esempio per n = 3, con la matrice:
 *    1  2  3
 *    7 11 10
 *    9  5  8
 *
 *   Elementi sul bordo: 1, 2, 3, 7, 10, 9, 5, 8  → somma = 45
 *   (l'elemento centrale 11 NON e' sul bordo)
 *
 * Nel main:
 *   - Inizializza una matrice mat[26][26] con valori a scelta
 *   - Chiama borderSum con n = 3 e stampa il risultato
 *   - Testa anche i casi n = 0 e n = 1
 */

#include <stdio.h>

#define DIM 26

/* TODO: implementa la funzione borderSum */
int borderSum(int mat[][DIM], int n) {
    /* TODO */
    return 0;
}

int main(void) {
    int mat[DIM][DIM];

    /* Inizializzazione a zero */
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            mat[i][j] = 0;

    /* Esempio con n = 3 */
    mat[0][0] = 1;  mat[0][1] = 2;  mat[0][2] = 3;
    mat[1][0] = 7;  mat[1][1] = 11; mat[1][2] = 10;
    mat[2][0] = 9;  mat[2][1] = 5;  mat[2][2] = 8;

    /* TODO: chiama borderSum e stampa i risultati */

    return 0;
}