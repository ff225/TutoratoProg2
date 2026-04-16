/*
 * Esercizio 6 – Sezione D: Mini calcolatrice con puntatori a funzione
 * --------------------------------------------------------------------
 * SOLUZIONE (include anche l'estensione con array di puntatori)
 */

#include <stdio.h>

int somma(int a, int b)         { return a + b; }
int sottrai(int a, int b)       { return a - b; }
int moltiplica(int a, int b)    { return a * b; }
int dividi_intera(int a, int b) { return a / b; }

int main(void) {
    int a, b, scelta;

    /* Acquisizione input */
    printf("Inserisci il primo operando:  ");
    scanf("%d", &a);
    printf("Inserisci il secondo operando: ");
    scanf("%d", &b);

    printf("\nScegli l'operazione:\n");
    printf("  1. Somma\n");
    printf("  2. Sottrazione\n");
    printf("  3. Moltiplicazione\n");
    printf("  4. Divisione intera\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    /* Validazione scelta */
    if (scelta < 1 || scelta > 4) {
        printf("Errore: operazione non valida.\n");
        return 1;
    }

    /* Controllo divisione per zero */
    if (scelta == 4 && b == 0) {
        printf("Errore: divisione per zero.\n");
        return 1;
    }

    /* --- Versione con if/else --- */
    int (*op)(int, int) = NULL;

    if      (scelta == 1) op = somma;
    else if (scelta == 2) op = sottrai;
    else if (scelta == 3) op = moltiplica;
    else                  op = dividi_intera;

    printf("Risultato: %d\n", op(a, b));

    /* --- Versione alternativa con switch ---
    int (*op)(int, int) = NULL;

    switch (scelta) {
        case 1: op = somma;         break;
        case 2: op = sottrai;       break;
        case 3: op = moltiplica;    break;
        case 4: op = dividi_intera; break;
    }

    printf("Risultato: %d\n", op(a, b));
    */

    return 0;
}

/*
 * --- Estensione opzionale: array di puntatori a funzione ---
 *
 * int (*ops[4])(int, int) = {somma, sottrai, moltiplica, dividi_intera};
 *
 * // scelta e' 1-based, l'array e' 0-based:
 * printf("Risultato: %d\n", ops[scelta - 1](a, b));
 */