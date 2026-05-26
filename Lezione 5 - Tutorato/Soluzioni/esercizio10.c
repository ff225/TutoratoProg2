/*
 * Soluzione Esercizio 10
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

struct elem *cancella_doppia(struct elem *l, int v) {
    struct elem *e;
    while ((e = search(l, v)) != NULL)
        l = delete_elem(l, e);
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
