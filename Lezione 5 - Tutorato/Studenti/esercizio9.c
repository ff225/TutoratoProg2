/*
 * Esercizio 9
 *
 * Scrivere void stampa_inversa(struct elem *l) che stampa
 * la lista dalla coda alla testa sfruttando il puntatore prec.
 *
 *   lista:   3 -> 7 -> 2 -> NULL
 *   output:  2 7 3
 *
 * Hint:
 *   - scorri la lista in avanti fino all'ultimo elemento
 *     (quello con pun == NULL)
 *   - poi risali usando prec finche' prec == NULL
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

void stampa_lista(struct elem *p) {
    while (p != NULL) {
        printf("%d ", p->inf);
        p = p->pun;
    }
    printf("\n");
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

/* TODO: implementa stampa_inversa */
void stampa_inversa(struct elem *l) {
    /* ... */
}

int main(void) {
    int n;
    struct elem *lista;

    printf("Quanti elementi? ");
    scanf("%d", &n);
    lista = crea_lista_doppia(n);

    printf("Avanti:   ");
    stampa_lista(lista);

    printf("Inversa:  ");
    stampa_inversa(lista);

    return 0;
}
