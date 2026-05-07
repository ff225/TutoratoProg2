/*
 * Esercizio 10
 *
 * Scrivere struct elem *cancella_doppia(struct elem *l, int v)
 * che rimuove dalla lista doppia tutte le occorrenze di v.
 *
 * Rispetto alla versione per lista semplice, ogni delete_elem
 * e' ora O(1) perche' accede direttamente al predecessore via prec.
 *
 * Hint:
 *   - la logica e' identica a cancella della lista semplice
 *   - usa search per trovare il nodo, delete_elem per rimuoverlo
 *   - ripeti finche' search restituisce NULL
 */

#include <stdio.h>
#include <stdlib.h>

struct elem {
    int inf;
    struct elem *pun;
    struct elem *prec;
};

struct elem *insert_elem(struct elem *l, struct elem *e) {
    e->pun  = l;
    e->prec = NULL;
    if (l != NULL)
        l->prec = e;
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

struct elem *delete_elem(struct elem *l, struct elem *e) {
    if (l == e) {
        l = tail(l);
    } else {
        (e->prec)->pun = e->pun;
    }
    if (e->pun != NULL)
        (e->pun)->prec = e->prec;
    free(e);
    return l;
}

struct elem *crea_lista_doppia(int n) {
    struct elem *lista = NULL;
    struct elem *e;
    int i;
    for (i = 0; i < n; i++) {
        e = malloc(sizeof(struct elem));
        if (e == NULL) { fprintf(stderr, "Errore\n"); exit(1); }
        printf("Elemento %d: ", i + 1);
        scanf("%d", &e->inf);
        e->pun  = NULL;
        e->prec = NULL;
        lista = insert_elem(lista, e);
    }
    return lista;
}

/* TODO: implementa cancella_doppia */
struct elem *cancella_doppia(struct elem *l, int v) {
    /* ... */
    return l;
}

int main(void) {
    int n, v;
    struct elem *lista;

    printf("Quanti elementi? ");
    scanf("%d", &n);
    lista = crea_lista_doppia(n);

    printf("Valore da cancellare: ");
    scanf("%d", &v);

    printf("Prima: ");
    stampa_lista(lista);

    lista = cancella_doppia(lista, v);

    printf("Dopo:  ");
    stampa_lista(lista);

    return 0;
}
