/*
 * Esercizio 1 – Sezione B: Puntatori e array
 * -------------------------------------------
 * SOLUZIONE
 */

#include <stdio.h>

int trova_max(const double *a, int n, double *max_out) {
    if (a == NULL || n <= 0 || max_out == NULL)
        return -1;

    *max_out = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *max_out)
            *max_out = a[i];
    }
    return 0;
}

int main(void) {
    double v[] = {3.5, 1.2, 7.8, 4.0};
    int n = 4;
    double max;

    if (trova_max(v, n, &max) != 0) {
        printf("Errore: array non valido.\n");
        return 1;
    }

    printf("Massimo: %.2f\n", max);
    return 0;
}