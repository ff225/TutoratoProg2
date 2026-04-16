/*
 * Esercizio 5 – Sezione C: Rete neurale a due livelli 
 * ----------------------------------------------------------------
 * SOLUZIONE
 */

#include <stdio.h>

#define IN  6
#define H   7
#define OUT 4

void neural_forward(const double input[IN],
                    const double w1[H][IN],
                    const double w2[OUT][H],
                    double output[OUT]) {
    double result[H];

    /* Passo 1: input x w1 → result (dimensione H) */
    for (int i = 0; i < H; i++) {
        result[i] = 0.0;
        for (int j = 0; j < IN; j++)
            result[i] += input[j] * w1[i][j];
    }

    /* Passo 2: result x w2 → output (dimensione OUT) */
    for (int i = 0; i < OUT; i++) {
        output[i] = 0.0;
        for (int j = 0; j < H; j++)
            output[i] += result[j] * w2[i][j];
    }
}

int main(void) {
    double input[IN] = {1.0, 0.5, -1.0, 0.2, 0.8, -0.3};

    double w1[H][IN];
    double w2[OUT][H];

    for (int i = 0; i < H; i++)
        for (int j = 0; j < IN; j++)
            w1[i][j] = 0.1 * (i - j);

    for (int i = 0; i < OUT; i++)
        for (int j = 0; j < H; j++)
            w2[i][j] = 0.1 * (i + j);

    double output[OUT];
    neural_forward(input, w1, w2, output);

    /* Stampa output */
    printf("Output della rete:\n");
    for (int i = 0; i < OUT; i++)
        printf("  output[%d] = %.4f\n", i, output[i]);

    /* Classe con valore massimo */
    int classe = 0;
    for (int i = 1; i < OUT; i++)
        if (output[i] > output[classe])
            classe = i;

    printf("Classe predetta: %d\n", classe);

    return 0;
}