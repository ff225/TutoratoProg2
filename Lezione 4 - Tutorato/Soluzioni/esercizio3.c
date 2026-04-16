/*
 * Esercizio 3 - Typedef (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} punto_t;

typedef struct {
    float base, altezza;
} rettangolo_t;


/* --- Funzioni su punto_t --- */

void stampa_punto(punto_t p) {
    printf("Punto: (%.2f, %.2f)\n", p.x, p.y);
}

punto_t somma_punti(punto_t a, punto_t b) {
    punto_t res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

float distanza(punto_t a, punto_t b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}


/* --- Funzioni su rettangolo_t --- */

float area(rettangolo_t r) {
    return r.base * r.altezza;
}

float perimetro(rettangolo_t r) {
    return 2.0 * (r.base + r.altezza);
}

int e_quadrato(rettangolo_t r) {
    return r.base == r.altezza;
}

void stampa_rettangolo(rettangolo_t r) {
    printf("Base: %.2f | Altezza: %.2f\n", r.base, r.altezza);
    printf("Area: %.2f | Perimetro: %.2f\n", area(r), perimetro(r));
    if (e_quadrato(r))
        printf("E' un quadrato.\n");
    else
        printf("Non e' un quadrato.\n");
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
