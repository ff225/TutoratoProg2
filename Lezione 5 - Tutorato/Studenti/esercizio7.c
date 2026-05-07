/*
 * Esercizio 7 
 *
 * Scrivere struct elem *cancella(struct elem *l, int v) che
 * restituisce la lista priva di tutti gli elementi con inf == v.
 *
 *   cancella(l, 1)  ->  2 -> 4 -> NULL
 *                       (se la lista e': 2 -> 1 -> 4 -> 1 -> NULL)
 *
 * Hint:
 *   - usa search per trovare la prima occorrenza -> ottieni e
 *   - usa delete_elem per rimuoverla e aggiornare la lista
 *   - ripeti finche' search restituisce NULL
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

struct elem *delete_elem(struct elem *l, struct elem *e) {
    if (l == e) {
        l = tail(l);
    } else {
        struct elem *l1 = l;
        while (tail(l1) != e)
            l1 = tail(l1);
        l1->pun = tail(e);
    }
    free(e);
    return l;
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

/* TODO: implementa cancella */
struct elem *cancella(struct elem *l, int v) {
    /* ... */
    return l;
}

int main(void) {
    int n, v;
    struct elem *lista;

    printf("Quanti elementi? ");
    scanf("%d", &n);
    lista = crea_lista(n);

    printf("Valore da cancellare: ");
    scanf("%d", &v);

    printf("Prima: ");
    stampa_lista(lista);

    lista = cancella(lista, v);

    printf("Dopo:  ");
    stampa_lista(lista);

    return 0;
}
