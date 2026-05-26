#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* === Tipo di dato === */
struct elem {
  int inf;
  struct elem *pun;
};
typedef struct elem *lista;

/* === Primitive sulla lista === */

/* Alloca un elemento e gli assegna il valore */
static struct elem *new_elem(int v) {
  struct elem *e = malloc(sizeof(struct elem));
  if (e == NULL) {
    fprintf(stderr, "Errore di allocazione\n");
    exit(EXIT_FAILURE);
  }
  e->inf = v;
  e->pun = NULL;
  return e;
}

int head(lista l) { return l->inf; }

lista tail(lista l) { return l->pun; }

lista insert_elem(lista l, struct elem *e) {
  e->pun = l;
  return e;
}

lista delete_elem(lista l, struct elem *e) {
  if (l == e) {
    lista nuova_testa = tail(l);
    free(e);
    return nuova_testa;
  }
  lista l1 = l;
  while (l1 != NULL && tail(l1) != e)
    l1 = tail(l1);
  if (l1 != NULL) {
    l1->pun = e->pun;
    free(e);
  }
  return l;
}

struct elem *search(lista l, int v) {
  while (l != NULL) {
    if (head(l) == v)
      return l;
    l = tail(l);
  }
  return NULL;
}

/* === Funzioni dell'applicazione === */

void stampalista(lista l) {
  printf("Lista: ");
  while (l != NULL) {
    printf("%d ", head(l));
    l = tail(l);
  }
  printf("\n");
}

lista crealista(int n) {
  lista testa = NULL;
  for (int i = 1; i <= n; i++) {
    int v;
    printf("Valore %d: ", i);
    scanf("%d", &v);
    struct elem *e = new_elem(v);
    testa = insert_elem(testa, e);
  }
  return testa;
}

lista cancella(lista l, int v) {
  struct elem *e = search(l, v);
  while (e != NULL) {
    l = delete_elem(l, e);
    e = search(l, v);
  }
  return l;
}

/* === Main === */

int main(void) {
  int n;
  printf("Quanti elementi? ");
  scanf("%d", &n);

  lista l = crealista(n);
  stampalista(l);

  int v;
  printf("Valore da cancellare: ");
  scanf("%d", &v);
  l = cancella(l, v);
  stampalista(l);

  return 0;
}