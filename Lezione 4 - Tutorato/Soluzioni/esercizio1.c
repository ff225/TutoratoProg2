/*
 * Esercizio 1 - Struct punto_s (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <math.h>

struct punto_s {
    float x, y;
};

void stampa_punto(struct punto_s p) {
    printf("Punto: (%.2f, %.2f)\n", p.x, p.y);
}

struct punto_s somma_punti(struct punto_s a, struct punto_s b) {
    struct punto_s res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

float distanza(struct punto_s a, struct punto_s b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main(void) {
    struct punto_s p1 = { .x = 1.0, .y = 2.0 };
    struct punto_s p2 = { .x = 4.0, .y = 6.0 };

    stampa_punto(p1);
    stampa_punto(p2);

    struct punto_s somma = somma_punti(p1, p2);
    printf("Somma -> ");
    stampa_punto(somma);

    printf("Distanza: %.2f\n", distanza(p1, p2));

    return 0;
}
