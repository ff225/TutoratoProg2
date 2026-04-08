/*
 * Esercizio 1 – Sezione B: Puntatori e array
 * -------------------------------------------
 * Scrivi una funzione trova_max che riceve un array di double
 * e la sua dimensione, e restituisce il valore massimo tramite
 * un parametro di output (puntatore).
 *
 * Prototipo:
 *   int trova_max(const double *a, int n, double *max_out);
 *
 * La funzione deve:
 *   - restituire  0 se l'operazione va a buon fine
 *   - restituire -1 se l'array e' NULL o se n <= 0
 *
 * Nel main:
 *   - dichiara l'array {3.5, 1.2, 7.8, 4.0}
 *   - chiama trova_max
 *   - stampa il massimo se la chiamata ha avuto successo
 */

#include <stdio.h>

/* TODO: implementa la funzione trova_max */
int trova_max(const double *a, int n, double *max_out) {
    /* TODO */
    return 0;
}

int main(void) {
    double v[] = {3.5, 1.2, 7.8, 4.0};
    int n = 4;
    double max;

    /* TODO: chiama trova_max e stampa il risultato */

    return 0;
}