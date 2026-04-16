/*
 * Esercizio 4 - Enum
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Implementare le funzioni indicate usando le typedef fornite
 * e completare il main.
 *
 */

#include <stdio.h>

/* Typedef gia' fornite - non modificare */
typedef enum {
    LUNEDI = 1, MARTEDI, MERCOLEDI,
    GIOVEDI, VENERDI, SABATO, DOMENICA
} giorno_t;

typedef struct {
    giorno_t giorno;
    int ora;
    int minuti;
} appuntamento_t;


/* Restituisce il nome del giorno come stringa
 * Es: giorno_in_stringa(LUNEDI) --> "Lunedi" */
const char *giorno_in_stringa(giorno_t g) {
    /* TODO */
}

/* Stampa l'appuntamento nel formato:
 * "Appuntamento: Lunedi alle 09:30" */
void stampa_appuntamento(appuntamento_t a) {
    /* TODO */
}

/* Restituisce 1 se l'appuntamento cade in un giorno feriale
 * (lunedi-venerdi), 0 altrimenti */
int e_feriale(appuntamento_t a) {
    /* TODO */
}


int main(void) {
    /* TODO:
     * - Definire almeno tre appuntamenti (almeno uno nel weekend)
     * - Stamparli con stampa_appuntamento
     * - Indicare per ciascuno se e' feriale o no
     */

    return 0;
}
