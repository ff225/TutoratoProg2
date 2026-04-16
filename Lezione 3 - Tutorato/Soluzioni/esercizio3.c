/*
 * Esercizio 3 – Sezione C: Validazione e modifica di una matrice 2D
 * ------------------------------------------------------------------
 * SOLUZIONE
 */

#include <stdio.h>

#define DIM 1000

int modifica_matrice(int A[][DIM],
                     int rowStart, int rowEnd,
                     int colStart, int colEnd,
                     int value) {
    /* Validazione */
    if (rowStart < 0 || rowStart > rowEnd || rowEnd >= DIM)
        return 0;
    if (colStart < 0 || colStart > colEnd || colEnd >= DIM)
        return 0;

    /* Modifica */
    for (int i = rowStart; i <= rowEnd; i++)
        for (int j = colStart; j <= colEnd; j++)
            A[i][j] = value;

    return 1;
}

int main(void) {
    int A[DIM][DIM];

    /* Inizializzazione a zero */
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            A[i][j] = 0;

    /* Caso valido */
    if (modifica_matrice(A, 2, 6, 3, 8, 99))
        printf("Modifica effettuata.\n");
    else
        printf("Parametri non validi.\n");

    /* Stampa un sotto-insieme per verifica (righe 0-9, colonne 0-11) */
    printf("\nMatrice (righe 0-9, colonne 0-11):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 12; j++)
            printf("%3d ", A[i][j]);
        printf("\n");
    }

    /* Caso non valido */
    if (modifica_matrice(A, 5, 2, 0, 3, 42))
        printf("\nModifica effettuata.\n");
    else
        printf("\nParametri non validi (atteso).\n");

    return 0;
}