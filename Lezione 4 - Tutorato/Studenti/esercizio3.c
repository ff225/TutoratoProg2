/*
 * Esercizio 3 - Typedef
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Riscrivere gli Esercizi 1 e 2 usando typedef.
 * - Sostituire struct punto_s    con un tipo punto_t
 * - Sostituire struct rettangolo_s con un tipo rettangolo_t
 * - Aggiornare le firme di tutte le funzioni di conseguenza
 *
 * Il comportamento del programma deve restare identico.
 *
 */

#include <stdio.h>
#include <math.h>

/* TODO: definire punto_t con typedef (campi x e y, tipo float) */


/* TODO: definire rettangolo_t con typedef (campi base e altezza, tipo float) */


/* --- Funzioni su punto_t --- */

/* Stampa il punto nel formato: "Punto: (x, y)" */
void stampa_punto(punto_t p) {
    /* TODO */
}

/* Restituisce un nuovo punto con x = a.x+b.x, y = a.y+b.y */
punto_t somma_punti(punto_t a, punto_t b) {
    /* TODO */
}

/* Restituisce la distanza euclidea tra i punti a e b */
float distanza(punto_t a, punto_t b) {
    /* TODO */
}


/* --- Funzioni su rettangolo_t --- */

/* Restituisce base * altezza */
float area(rettangolo_t r) {
    /* TODO */
}

/* Restituisce 2 * (base + altezza) */
float perimetro(rettangolo_t r) {
    /* TODO */
}

/* Restituisce 1 se base == altezza, 0 altrimenti */
int e_quadrato(rettangolo_t r) {
    /* TODO */
}

/* Stampa base, altezza, area, perimetro e se e' un quadrato */
void stampa_rettangolo(rettangolo_t r) {
    /* TODO */
}


int main(void) {
    /* Punti */
    punto_t p1 = { .x = 1.0, .y = 2.0 };
    punto_t p2 = { .x = 4.0, .y = 6.0 };

    stampa_punto(p1);
    stampa_punto(p2);

    punto_t somma = somma_punti(p1, p2);
    printf("Somma -> ");
    stampa_punto(somma);

    printf("Distanza: %.2f\n", distanza(p1, p2));

    /* Rettangoli */
    rettangolo_t r1 = { .base = 4.0, .altezza = 3.0 };
    rettangolo_t r2 = { .base = 5.0, .altezza = 5.0 };

    printf("--- Rettangolo 1 ---\n");
    stampa_rettangolo(r1);

    printf("--- Rettangolo 2 ---\n");
    stampa_rettangolo(r2);

    return 0;
}
