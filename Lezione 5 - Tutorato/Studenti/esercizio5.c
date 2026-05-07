/*
 * Esercizio 5
 *
 * Scrivere la funzione crea_lista(int n) che chiede all'utente
 * n interi e costruisce una lista inserendo ogni elemento in testa.
 * La funzione restituisce il puntatore alla lista creata.
 * Nel main, stamparla con stampa_lista.
 *
 * Hint:
 *   - alloca ogni nodo con malloc(sizeof(struct elem))
 *   - controlla sempre che malloc non restituisca NULL
 *   - inizializza inf e pun, poi chiama insert_elem
 */

#include <stdio.h>
#include <stdlib.h>

struct elem {
  int inf;
  struct elem *pun;
};

struct elem *insert_elem(struct elem *l, struct elem *e) {
  e->pun = l;
  return e;
}

void stampa_lista(struct elem *p) {
  while (p != NULL) {
    printf("%d ", p->inf);
    p = p->pun;
  }
  printf("\n");
}

/* TODO: implementa crea_lista */
struct elem *crea_lista(int n) {
  /* ... */
  return NULL;
}

int main(void) {
  int n;
  struct elem *lista;

  printf("Quanti elementi? ");
  scanf("%d", &n);

  lista = crea_lista(n);
  stampa_lista(lista);

  return 0;
}
