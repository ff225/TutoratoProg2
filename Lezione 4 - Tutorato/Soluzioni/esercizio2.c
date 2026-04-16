/*
 * Esercizio 2 - Struct rettangolo_s (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>

struct rettangolo_s {
    float base, altezza;
};

float area(struct rettangolo_s r) {
    return r.base * r.altezza;
}

float perimetro(struct rettangolo_s r) {
    return 2.0 * (r.base + r.altezza);
}

int e_quadrato(struct rettangolo_s r) {
    return r.base == r.altezza;
}

void stampa_rettangolo(struct rettangolo_s r) {
    printf("Base: %.2f | Altezza: %.2f\n", r.base, r.altezza);
    printf("Area: %.2f | Perimetro: %.2f\n", area(r), perimetro(r));
    if (e_quadrato(r))
        printf("E' un quadrato.\n");
    else
        printf("Non e' un quadrato.\n");
}

int main(void) {
    struct rettangolo_s r1 = { .base = 4.0, .altezza = 3.0 };
    struct rettangolo_s r2 = { .base = 5.0, .altezza = 5.0 };

    printf("--- Rettangolo 1 ---\n");
    stampa_rettangolo(r1);

    printf("--- Rettangolo 2 ---\n");
    stampa_rettangolo(r2);

    return 0;
}
