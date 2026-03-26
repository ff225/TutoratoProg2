/*
 * Esercizio 7: Modello di Ricker
 *
 * Vogliamo simulare come cambia una popolazione nel tempo.
 * Ad ogni passo usiamo questa formula per calcolare la popolazione nuova:
 *
 *   x_nuovo = x_vecchio * e^( r * (1 - x_vecchio/N) )
 *
 * Variabili:
 *   x = popolazione attuale
 *   r = quanto cresce velocemente la popolazione
 *   N = il massimo di individui che l'ambiente puo' sostenere
 *   n = quanti passi temporali vogliamo simulare
 *
 * Compilare con: gcc -Wall -Wextra esercizio_7.c -o esercizio_7 -lm
 */

#include <stdio.h>
#include <math.h>   /* serve per usare exp() */

int main() {

    /* Valori di partenza */
    int   n = 10;       /* numero di passi da simulare     */
    float r = 1.2;      /* tasso di crescita               */
    float N = 1000.0;   /* popolazione massima sostenibile */
    float x = 300.0;    /* popolazione iniziale            */

    printf("Popolazione iniziale: %.2f\n", x);

    /* Ripetiamo il calcolo per n passi.
     * Ad ogni giro aggiorniamo x con la formula di Ricker. */
    for (int t = 1; t <= n; t++) {

        /* Calcoliamo prima l'esponente separatamente, per chiarezza.
         *
         * - Se x e' minore di N: l'esponente e' positivo, la popolazione cresce
         * - Se x e' maggiore di N: l'esponente e' negativo, la popolazione cala
         * - Se x e' uguale a N: l'esponente e' 0, exp(0) = 1, x non cambia
         */
        float esponente = r * (1.0 - x / N);

        /* Aggiorniamo la popolazione per il passo corrente */
        x = x * exp(esponente);

        printf("Passo %2d: %.2f\n", t, x);
    }

    return 0;
}