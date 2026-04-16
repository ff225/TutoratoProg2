/*
 * Esercizio 4 – Sezione C: Funzione borderSum
 * ---------------------------------------------
 * SOLUZIONE
 */

#include <stdio.h>

#define DIM 26

int borderSum(int mat[][DIM], int n) {
    if (n <= 0) return 0;
    if (n == 1) return mat[0][0];

    int sum = 0;

    /* Prima e ultima riga */
    for (int j = 0; j < n; j++) {
        sum += mat[0][j];
        sum += mat[n-1][j];
    }

    /* Prima e ultima colonna (esclusi gli angoli gia' sommati) */
    for (int i = 1; i < n - 1; i++) {
        sum += mat[i][0];
        sum += mat[i][n-1];
    }

    return sum;
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

    printf("borderSum(n=3): %d  (atteso 45)\n", borderSum(mat, 3));
    printf("borderSum(n=1): %d  (atteso 1)\n",  borderSum(mat, 1));
    printf("borderSum(n=0): %d  (atteso 0)\n",  borderSum(mat, 0));

    return 0;
}