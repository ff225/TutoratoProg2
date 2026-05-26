/*
 * File: esercizio1_funzioni.c
 */

#include <stdio.h>

/* Dichiarazione (NON definizione): "a esiste, e' di tipo int,
 * ed e' definita in un altro file". Senza extern, questa riga
 * sarebbe una nuova definizione di "a" e il linker protesterebbe
 * con "multiple definition of `a'".
 */
extern int a;

void stampa(void) { printf("Il valore di a e': %d\n", a); }
