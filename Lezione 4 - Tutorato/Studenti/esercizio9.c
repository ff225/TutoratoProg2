/*
 * Esercizio 10 - fgets + Struct + Enum + Array di Struct
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Leggere N appuntamenti da terminale e stampare solo quelli feriali.
 *
 * Esempio di esecuzione:
 *   Quanti appuntamenti? 3
 *   Appuntamento 1:
 *     Giorno (1=Lun, 2=Mar, 3=Mer, 4=Gio, 5=Ven, 6=Sab, 7=Dom): 1
 *     Ora: 9
 *     Minuti: 30
 *   Appuntamento 2:
 *     Giorno (1=Lun, ...): 6
 *     Ora: 11
 *     Minuti: 0
 *   Appuntamento 3:
 *     Giorno (1=Lun, ...): 3
 *     Ora: 14
 *     Minuti: 0
 *
 *   Appuntamenti feriali:
 *   - Lunedi alle 09:30
 *   - Mercoledi alle 14:00
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_APPUNTAMENTI 10

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
    /* TODO (puoi riprendere la soluzione dell'Esercizio 4) */
}

/* Restituisce 1 se l'appuntamento e' feriale (lun-ven), 0 altrimenti */
int e_feriale(appuntamento_t a) {
    /* TODO (puoi riprendere la soluzione dell'Esercizio 4) */
}

/* Legge un singolo appuntamento da terminale usando fgets.
 * Memorizza il risultato nella struct puntata da a.
 *
 * Suggerimento: leggere ogni valore come stringa con fgets,
 * rimuovere '\n' con strcspn, poi convertire con atoi.
 * (In questo esercizio atoi e' sufficiente: i valori
 *  sono piccoli e l'input e' considerato trusted) */
void leggi_appuntamento(appuntamento_t *a) {
    /* TODO */
}

/* Stampa un appuntamento nel formato: "Lunedi alle 09:30" */
void stampa_appuntamento(appuntamento_t a) {
    /* TODO (puoi riprendere la soluzione dell'Esercizio 4) */
}


int main(void) {
    appuntamento_t appuntamenti[MAX_APPUNTAMENTI];
    int n = 0;

    /* TODO:
     * - Leggere quanti appuntamenti inserire (max MAX_APPUNTAMENTI)
     *   con fgets; se il valore e' fuori range, stampare un errore
     *   e restituire 1
     * - Leggere n appuntamenti con leggi_appuntamento e
     *   memorizzarli nell'array
     * - Stampare "Appuntamenti feriali:" e poi solo quelli feriali
     *   con stampa_appuntamento
     */

    return 0;
}
