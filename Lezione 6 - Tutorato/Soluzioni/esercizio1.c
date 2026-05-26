/*
 * Esercizio 1 - Soluzione
 * File: esercizio1.c
 *
 * Compilazione:
 *   gcc -Wall -Wextra -std=c11 esercizio1.c esercizio1_funzioni.c -o
 * esercizio1
 */

#include <stdio.h>

/* Definizione della variabile globale: alloca memoria per "a".
 * Essendo dichiarata fuori da ogni funzione, ha scope di file
 * e linkage esterno (default), quindi e' accessibile dagli altri file.
 */
int a;

/* Prototipo della funzione stampa() definita in esercizio1_funzioni.c.
 * Senza questo, il compilatore di esercizio1.c non saprebbe che esiste.
 */
void stampa(void);

int main(void) {
  a = 42;
  stampa();
  return 0;
}