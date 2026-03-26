/*
 * Esercizio 8: Problema del Guardiacosta
 *
 * Un bagnino deve raggiungere un bagnante in pericolo.
 * Il percorso ha due tratti:
 *   1) Sulla sabbia, dove corre con velocita' v1
 *   2) In acqua,    dove nuota con velocita' v2
 *
 * Il punto in cui il bagnino entra in acqua si chiama w.
 * Cambiando w cambia il tempo totale: vogliamo trovare il w migliore.
 *
 * Le formule per il tempo dei due tratti sono:
 *   t1(w) = sqrt(d1^2 + w^2)          / v1
 *   t2(w) = sqrt(d2^2 + (wmax-w)^2)   / v2
 *   t(w)  = t1 + t2
 *
 * Come troviamo il w migliore?
 * Proviamo tanti valori di w uno per uno e teniamo quello
 * che da' il tempo piu' basso (ricerca del minimo per campionamento).
 *
 * Compilare con: gcc -Wall -Wextra esercizio_8.c -o esercizio_8 -lm
 */

#include <stdio.h>
#include <math.h>   /* serve per usare sqrt() */

int main() {

    /* Dati del problema */
    float d1   = 100.0;   /* distanza dal bagnino alla riva (sabbia) */
    float d2   = 100.0;   /* distanza dal bagnante alla riva (acqua) */
    float v1   = 4.0;     /* velocita' sulla sabbia                  */
    float v2   = 3.0;     /* velocita' in acqua                      */
    int   wmax = 100;     /* lunghezza massima della riva            */
    int   n    = 100;     /* quanti valori di w proviamo             */

    /* Queste due variabili tengono il risultato migliore trovato finora.
     * Usiamo -1 come valore iniziale "di comodo": cosi' al primo giro
     * del ciclo aggiorniamo sempre il minimo, qualunque sia il primo t. */
    float best_w = 0.0;
    float best_t = -1.0;

    /* Proviamo n valori di w equispaziati tra 0 e wmax */
    for (int i = 0; i < n; i++) {

        /* Calcolo del valore corrente di w */
        float w = (float)i * wmax / n;

        /* Tempo per il tratto sulla sabbia */
        float t1 = sqrt(d1*d1 + w*w) / v1;

        /* Tempo per il tratto in acqua
         * (la distanza orizzontale in acqua e' wmax - w) */
        float t2 = sqrt(d2*d2 + (wmax - w)*(wmax - w)) / v2;

        /* Tempo totale per questo valore di w */
        float t = t1 + t2;

        /* Se questo e' il tempo piu' basso trovato finora, lo salviamo */
        if (best_t < 0.0 || t < best_t) {
            best_t = t;
            best_w = w;
        }
    }

    printf("w ottimale:   %.2f m\n", best_w);
    printf("Tempo minimo: %.2f s\n", best_t);

    return 0;
}