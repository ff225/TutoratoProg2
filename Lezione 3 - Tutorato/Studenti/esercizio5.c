/*
 * Esercizio 5 – Sezione C: Rete neurale a due livelli
 * ----------------------------------------------------------------
 * Scrivi una funzione che simuli le ultime fasi di una rete neurale,
 * calcolando l'output tramite due prodotti matrice-vettore successivi.
 *
 * Dati:
 *   input  -> array monodimensionale di dimensione IN  (= 6)
 *   w1     -> matrice di dimensione IN  x H   (= 6 x 7)
 *   w2     -> matrice di dimensione H   x OUT (= 7 x 4)
 *   output -> array monodimensionale di dimensione OUT (= 4)
 *
 * Operazione richiesta:
 *   Prodotto matrice-vettore: C[i] = somma su j di (A[j] * B[i][j])
 *
 *   Passo 1: result[i] = somma su j di (input[j] * w1[i][j])
 *            result ha dimensione H = 7
 *
 *   Passo 2: output[i] = somma su j di (result[j] * w2[i][j])
 *            output ha dimensione OUT = 4
 *
 * La rete "sceglie" la classe con il valore di output piu' alto.
 *
 * Prototipo:
 *   void neural_forward(const double input[IN],
 *                       const double w1[H][IN],  (nota: w1 ha H righe e IN colonne)
 *                       const double w2[OUT][H],
 *                       double output[OUT]);
 *
 * Nel main:
 *   - Inizializza input e i pesi w1, w2 con valori a scelta
 *   - Chiama neural_forward
 *   - Stampa l'array output e l'indice della classe con valore massimo
 */

#include <stdio.h>

#define IN  6
#define H   7
#define OUT 4

/* TODO: implementa neural_forward */
void neural_forward(const double input[IN],
                    const double w1[H][IN],
                    const double w2[OUT][H],
                    double output[OUT]) {
    /* TODO */
}

int main(void) {
    /* Pesi e input di esempio (valori arbitrari) */
    double input[IN] = {1.0, 0.5, -1.0, 0.2, 0.8, -0.3};

    double w1[H][IN];
    double w2[OUT][H];

    /* Inizializzazione semplice: w1[i][j] = 0.1 * (i - j) */
    for (int i = 0; i < H; i++)
        for (int j = 0; j < IN; j++)
            w1[i][j] = 0.1 * (i - j);

    /* Inizializzazione semplice: w2[i][j] = 0.1 * (i + j) */
    for (int i = 0; i < OUT; i++)
        for (int j = 0; j < H; j++)
            w2[i][j] = 0.1 * (i + j);

    double output[OUT];

    /* TODO: chiama neural_forward, stampa output e classe massima */

    return 0;
}