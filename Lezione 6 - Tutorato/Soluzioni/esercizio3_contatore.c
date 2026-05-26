/*
 * Esercizio 3 - Soluzione
 * File: esercizio3_contatore.c
 */

#include <stdio.h>

void conta_auto(void) {
  /* Variabile locale automatica: viene allocata sullo stack
   * all'ingresso della funzione e distrutta all'uscita.
   * Ogni chiamata riparte da n = 0.
   */
  int n = 0;
  n++;
  printf("conta_auto: %d\n", n);
}

void conta_static(void) {
  /* Variabile locale statica: e' allocata in zona dati
   * all'avvio del programma e persiste fino alla sua fine.
   * L'inizializzazione "static int n = 0;" avviene UNA SOLA VOLTA,
   * non a ogni chiamata. Tra una chiamata e l'altra la variabile
   * mantiene il proprio valore.
   */
  static int n = 0;
  n++;
  printf("conta_static: %d\n", n);
}