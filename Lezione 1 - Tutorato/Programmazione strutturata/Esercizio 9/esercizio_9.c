/*
 * Esercizio 9: Crescita Logistica - Punto di Equilibrio
 *
 * Il modello di crescita logistica aggiorna la popolazione cosi':
 *
 *   x_nuovo = r * x_vecchio * (1 - x_vecchio/N)
 *
 * Un "punto di equilibrio" e' un valore di x che non cambia mai:
 * se la popolazione vale x_eq oggi, vale ancora x_eq domani.
 *
 * Matematicamente, x_eq deve soddisfare:
 *   x_eq = r * x_eq * (1 - x_eq/N)
 *
 * Per trovarlo, calcoliamo per ogni x candidato quanto e' lontano
 * dall'uguaglianza qui sopra. Chiamiamo questo valore "errore":
 *   errore = | x - r * x * (1 - x/N) |
 *
 * la x con l'errore piu' piccolo e' il nostro punto di equilibrio.
 *
 * Nota: x = 0 e' sempre una soluzione (nessuna popolazione),
 * ma non e' interessante. Partiamo quindi da i = 1.
 *
 * Compilare con: gcc -Wall -Wextra esercizio_9.c -o esercizio_9
 */

#include <stdio.h>

int main() {

    /* Parametri del modello */
    float r = 1.2;      /* tasso di crescita               */
    float N = 1100.0;   /* popolazione massima sostenibile */
    int   n = 10000;    /* quanti valori di x proviamo     */

    /* Variabili per tenere il risultato migliore trovato finora.
     * Usiamo -1 come valore iniziale "di comodo": al primo giro
     * del ciclo aggiorniamo sempre il minimo. */
    float best_x   = 0.0;
    float best_err = -1.0;

    /* Proviamo n valori di x equispaziati tra 0 (escluso) e N */
    for (int i = 1; i <= n; i++) {

        /* Valore candidato per il punto di equilibrio */
        float x = (float)i * N / n;

        /* Calcoliamo la differenza tra x e il valore che avrebbe
         * se fosse davvero un punto di equilibrio */
        float diff = x - r * x * (1.0 - x / N);

        /* Il valore assoluto si calcola con un semplice if:
         * se diff e' negativa la rendiamo positiva cambiandone il segno */
        float err;
        if (diff < 0)
            err = -diff;
        else
            err = diff;
        
        // Alternativa all'if
        //err = (diff < 0) ? -diff : diff;

        /* Se questo errore e' il piu' basso trovato finora, lo salviamo */
        if (best_err < 0.0 || err < best_err) {
            best_err = err;
            best_x   = x;
        }
    }

    printf("Punto di equilibrio approssimato: %.4f\n", best_x);
    printf("Errore minimo:                    %.8f\n", best_err);

    return 0;
}