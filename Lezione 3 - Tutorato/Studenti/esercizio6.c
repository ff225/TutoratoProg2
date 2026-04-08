/*
 * Esercizio 6 – Sezione D: Mini calcolatrice con puntatori a funzione
 * --------------------------------------------------------------------
 * Implementa una mini calcolatrice che usa un puntatore a funzione
 * per selezionare l'operazione da eseguire.
 *
 * Il programma deve:
 *   1. Acquisire dall'utente due operandi interi (a, b)
 *   2. Mostrare un menu:
 *        1. Somma
 *        2. Sottrazione
 *        3. Moltiplicazione
 *        4. Divisione intera
 *   3. Acquisire il codice operazione (1-4)
 *   4. Usare un puntatore a funzione int (*op)(int, int) per
 *      selezionare la funzione corrispondente tramite if/else
 *   5. Stampare il risultato
 *
 * Note:
 *   - Se il codice operazione non e' tra 1 e 4, stampare un messaggio
 *     di errore e terminare con codice 1.
 *   - Per la divisione intera, se b == 0 stampare un messaggio di
 *     errore e terminare con codice 1.
 *
 * Estensione opzionale:
 *   Riscrivi il programma usando un array di puntatori a funzione
 *   int (*ops[4])(int, int) invece degli if/else.
 */

#include <stdio.h>

/* TODO: implementa le quattro funzioni */
int somma(int a, int b)         { /* TODO */ return 0; }
int sottrai(int a, int b)       { /* TODO */ return 0; }
int moltiplica(int a, int b)    { /* TODO */ return 0; }
int dividi_intera(int a, int b) { /* TODO */ return 0; }

int main(void) {
    int a, b, scelta;

    /* Acquisizione input */
    printf("Inserisci il primo operando:  ");
    scanf("%d", &a);
    printf("Inserisci il secondo operando: ");
    scanf("%d", &b);

    printf("\nScegli l'operazione:\n");
    printf("  1. Somma\n");
    printf("  2. Sottrazione\n");
    printf("  3. Moltiplicazione\n");
    printf("  4. Divisione intera\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    /* TODO: dichiara il puntatore a funzione */

    /* TODO: assegna la funzione corretta con if/else */

    /* TODO: gestisci il caso divisione per zero */

    /* TODO: stampa il risultato */

    return 0;
}