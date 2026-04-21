/*
 * Esercizio 4
 *
 * Scrivere un programma che:
 *   1. Apre in lettura binaria il file "people.dat"
 *   2. Legge i record fino alla fine del file
 *   3. Stampa su stdout i dati di ogni persona
 *
 * Hint:
 *   - Usa fread per leggere UN record alla volta in un loop
 *   - Il loop termina quando fread restituisce 0
 *   - Usa %s, %c, %d per stampare i campi della struct
 */

#include <stdio.h>
#include <stdlib.h>

struct persona {
    char cognome[31];
    char nome[31];
    char sesso;
    int  anno_nascita;
};

int main(void) {
    struct persona p;
    int contatore = 0;
    FILE *fp;

    /* TODO: apri "people.dat" in lettura binaria */
    fp = /* ??? */;

    /* TODO: controlla se l'apertura ha avuto successo */

    /* TODO: leggi e stampa i record in un loop.
     *       Il loop deve terminare quando fread restituisce 0.
     *
     *       Per ogni persona stampare:
     *         Persona N: <cognome> <nome>, sesso: <sesso>, nato/a nel: <anno>
     */

    /* TODO: chiudi il file */

    printf("\nTotale persone lette: %d\n", contatore);
    return 0;
}
