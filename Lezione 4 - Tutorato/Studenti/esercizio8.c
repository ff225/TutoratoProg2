/*
 * Esercizio 9 - CLI + Struct + string.h
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Scrivere un programma CLI che riceva nome e cognome come
 * argomenti, li inserisca in una persona_t e stampi alcune
 * informazioni usando le funzioni di string.h.
 *
 * Uso atteso:
 *   ./esercizio_9 Mario Rossi
 *   Nome completo: Mario Rossi
 *   Lunghezza: 11
 *   Iniziali: M.R.
 *   Nome e cognome diversi.
 *
 */

#include <stdio.h>
#include <string.h>

/* TODO: definire persona_t con typedef struct
 * (campi nome e cognome, char[64]) */


/* Stampa nome completo, lunghezza, iniziali e se nome == cognome.
 *
 * Suggerimento per la lunghezza: usare strlen su entrambi i campi
 * e ricordarsi di contare lo spazio centrale.
 *
 * Suggerimento per le iniziali: il primo carattere di una stringa
 * e' semplicemente p.nome[0] e p.cognome[0].
 *
 * Suggerimento per il confronto: strcmp restituisce 0 se uguali. */
void stampa_info(persona_t p) {
    /* TODO */
}

int main(int argc, char **argv) {
    /* TODO:
     * - Verificare che argc == 3; altrimenti stampare su stderr:
     *   "Uso: <argv[0]> <nome> <cognome>" e restituire 1
     * - Dichiarare una variabile persona_t
     * - Copiare argv[1] in p.nome e argv[2] in p.cognome con strcpy
     * - Chiamare stampa_info
     */

    return 0;
}
