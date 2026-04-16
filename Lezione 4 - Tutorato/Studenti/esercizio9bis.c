/*
 * Esercizio 10 BONUS - Lettura del giorno come stringa
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Variante dell'Esercizio 10: invece di inserire il giorno come
 * numero, l'utente inserisce il nome del giorno come stringa
 * ("Lunedi", "Martedi", ...) che viene poi convertita nel
 * corrispondente valore dell'enum tramite strcmp.
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_APPUNTAMENTI 10

typedef enum {
    LUNEDI = 1, MARTEDI, MERCOLEDI,
    GIOVEDI, VENERDI, SABATO, DOMENICA
} giorno_t;

typedef struct {
    giorno_t giorno;
    int ora;
    int minuti;
} appuntamento_t;


const char *giorno_in_stringa(giorno_t g) {
    /* TODO (puoi riprendere la soluzione degli esercizi precedenti) */
}

int e_feriale(appuntamento_t a) {
    /* TODO */
}

void stampa_appuntamento(appuntamento_t a) {
    /* TODO */
}

/* Converte una stringa nel corrispondente valore dell'enum giorno_t.
 * Restituisce -1 se la stringa non corrisponde ad alcun giorno.
 *
 * Esempio:
 *   stringa_in_giorno("Lunedi")  --> LUNEDI
 *   stringa_in_giorno("Sabato")  --> SABATO
 *   stringa_in_giorno("pippo")   --> -1
 *
 * Suggerimento: usare strcmp per confrontare la stringa con
 * ciascun nome di giorno. */
int stringa_in_giorno(const char *s) {
    /* TODO */
}

/* Legge un appuntamento da terminale.
 * Il giorno viene inserito come stringa ("Lunedi", "Martedi", ...).
 * Se la stringa non e' un giorno valido, stampare un errore
 * e richiedere l'input finche' non e' corretto. */
void leggi_appuntamento(appuntamento_t *a) {
    /* TODO */
}


int main(void) {
    appuntamento_t appuntamenti[MAX_APPUNTAMENTI];
    char buf[16];
    int n;

    /* TODO: stesso main dell'Esercizio 10 */

    return 0;
}
