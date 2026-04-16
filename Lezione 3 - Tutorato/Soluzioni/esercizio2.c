/*
 * Esercizio 2 – Sezione C: Lista di array dinamici
 * --------------------------------------------------
 * SOLUZIONE
 */

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void) {
    int *data[N];

    /* Allocazione e inizializzazione */
    for (int i = 0; i < N; i++) {
        data[i] = (int*) calloc(i + 1, sizeof(int));
        if (data[i] == NULL) {
            /* Libera tutto cio' che e' gia' stato allocato */
            for (int j = 0; j < i; j++)
                free(data[j]);
            return 1;
        }
        for (int j = 0; j < i + 1; j++)
            data[i][j] = i * 10;
    }

    /* Stampa */
    for (int i = 0; i < N; i++) {
        printf("data[%d]: ", i);
        for (int j = 0; j < i + 1; j++)
            printf("%d ", data[i][j]);
        printf("\n");
    }

    /* Deallocazione */
    for (int i = 0; i < N; i++)
        free(data[i]);

    return 0;
}