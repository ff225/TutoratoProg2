/*
 * Esercizio 3 - static a livello blocco (variabile statica locale)
 *
 * Obiettivo: mostrare la differenza tra una variabile locale automatica
 * e una variabile locale statica.
 *
 * Compilazione:
 *   gcc -Wall -Wextra -std=c11 esercizio3.c esercizio3_contatore.c -o
 * esercizio3
 *
 * Output atteso:
 *   conta_auto: 1
 *   conta_auto: 1
 *   conta_auto: 1
 *   conta_static: 1
 *   conta_static: 2
 *   conta_static: 3
 */

#include <stdio.h>

/* TODO: dichiarare i prototipi delle due funzioni
 * conta_auto e conta_static, definite in esercizio3_contatore.c
 */
void conta_auto(void);
void conta_static(void);

int main(void) {
  /* TODO: chiamare conta_auto() tre volte */

  /* TODO: chiamare conta_static() tre volte */

  return 0;
}