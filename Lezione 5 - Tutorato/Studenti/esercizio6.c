/*
 * Esercizio 6
 *
 * Scrivere int conta(struct elem *l, int v) che conta
 * le occorrenze di v nella lista usando la primitiva search.
 *
 *   conta(l, 1)  ->  2   (se la lista e': 2 -> 1 -> 4 -> 1 -> NULL)
 *   conta(l, 6)  ->  0
 *
 * Hint:
 *   - usa search per trovare la prima occorrenza di v
 *   - avanza con tail sulla coda e ripeti
 *   - il loop termina quando search restituisce NULL
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

int head(struct elem *l) {
    return l->inf;
}

struct elem *tail(struct elem *l) {
    return l->pun;
}

void stampa_lista(struct elem *p) {
    while (p != NULL) {
        printf("%d ", p->inf);
        p = p->pun;
    }
    printf("\n");
}

struct elem *search(struct elem *l, int v) {
    while (l != NULL) {
        if (head(l) == v)
            return l;
        l = tail(l);
    }
    return NULL;
}

struct elem *crea_lista(int n) {
    struct elem *lista = NULL;
    struct elem *e;
    int i;
    for (i = 0; i < n; i++) {
        e = malloc(sizeof(struct elem));
        if (e == NULL) { fprintf(stderr, "Errore\n"); exit(1); }
        printf("Elemento %d: ", i + 1);
        scanf("%d", &e->inf);
        e->pun = NULL;
        lista = insert_elem(lista, e);
    }
    return lista;
}

/* TODO: implementa conta */
int conta(struct elem *l, int v) {
    /* ... */
    return 0;
}

int main(void) {
    int n, v;
    struct elem *lista;

    printf("Quanti elementi? ");
    scanf("%d", &n);
    lista = crea_lista(n);

    printf("Valore da cercare: ");
    scanf("%d", &v);

    stampa_lista(lista);
    printf("Occorrenze di %d: %d\n", v, conta(lista, v));

    return 0;
}
