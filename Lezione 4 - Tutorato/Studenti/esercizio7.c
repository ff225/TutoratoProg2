/*
 * Esercizio 7 - CLI + Struct
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Scrivere un programma CLI che riceva nome e cognome come
 * argomenti, li inserisca in una struct e stampi un saluto.
 *
 * Uso atteso:
 *   ./esercizio_7 Mario Rossi
 *   Ciao, Mario Rossi!
 *
 */

#include <stdio.h>
#include <string.h>

/* TODO: definire persona_t con typedef struct
 * (campi nome e cognome, char[64]) */


/* Stampa: "Ciao, <nome> <cognome>!" */
void stampa_saluto(persona_t p) {
    /* TODO */
}

int main(int argc, char **argv) {
    /* TODO:
     * - Verificare che argc == 3; altrimenti stampare su stderr:
     *   "Uso: <argv[0]> <nome> <cognome>" e restituire 1
     * - Dichiarare una variabile persona_t
     * - Copiare argv[1] in p.nome e argv[2] in p.cognome con strcpy
     * - Chiamare stampa_saluto
     */

    return 0;
}
