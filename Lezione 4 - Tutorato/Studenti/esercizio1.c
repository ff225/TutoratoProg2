/*
 * Esercizio 1 - Struct punto_s
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Dichiarare una struct punto_s con campi x e y di tipo float.
 * Implementare le funzioni indicate e completare il main.
 *
 */

#include <stdio.h>
#include <math.h>

/* TODO: dichiarare la struct punto_s con campi x e y (float) */


/* Stampa il punto nel formato: "Punto: (x, y)" */
void stampa_punto(struct punto_s p) {
    /* TODO */
}

/* Restituisce un nuovo punto con x = a.x+b.x, y = a.y+b.y */
struct punto_s somma_punti(struct punto_s a, struct punto_s b) {
    /* TODO */
}

/* Restituisce la distanza euclidea tra i punti a e b
 * Suggerimento: usare sqrt() da <math.h> */
float distanza(struct punto_s a, struct punto_s b) {
    /* TODO */
}

int main(void) {
    /* TODO:
     * - Inizializzare due punti p1 e p2
     * - Stamparli con stampa_punto
     * - Calcolare e stampare il punto somma
     * - Calcolare e stampare la distanza tra p1 e p2
     */

    return 0;
}
