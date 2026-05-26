/*
 * Esercizio 3 - Soluzione
 * File: esercizio3.c
 */

#include <stdio.h>

void conta_auto(void);
void conta_static(void);

int main(void) {
  conta_auto();
  conta_auto();
  conta_auto();

  conta_static();
  conta_static();
  conta_static();

  return 0;
}