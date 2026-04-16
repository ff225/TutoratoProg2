/*
 * Esercizio 6 - Anagrammi
 * Lezione 4 - Tutorато Programmazione 2
 *
 * Implementare una funzione che determini se due stringhe
 * sono anagrammi l'una dell'altra.
 *
 * Assunzioni semplificanti:
 * - Solo lettere minuscole ('a'..'z')
 * - Lunghezza massima: 63 caratteri
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 64   /* 63 caratteri utili + terminatore */
#define ALFABETO 26

/* Restituisce 1 se s1 e s2 sono anagrammi, 0 altrimenti.
 *
 * Suggerimento: creare un array di contatori di dimensione ALFABETO
 * (uno per ogni lettera). Incrementarlo scorrendo s1,
 * decrementarlo scorrendo s2. Se tutti i contatori sono 0,
 * le stringhe sono anagrammi. */
int sono_anagrammi(const char *s1, const char *s2) {
    /* TODO */
}

int main(void) {
    char s1[MAX_LEN], s2[MAX_LEN];

    /* TODO:
     * - Leggere due stringhe con fgets
     * - Rimuovere il '\n' da entrambe
     * - Stampare se sono anagrammi o no
     */

    return 0;
}
