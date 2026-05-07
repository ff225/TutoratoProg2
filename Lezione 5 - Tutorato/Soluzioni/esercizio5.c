/*
 * Soluzione Esercizio 5
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

struct elem *crea_lista(int n) {
    struct elem *lista = NULL;
    struct elem *e;
    int i;

    for (i = 0; i < n; i++) {
        e = malloc(sizeof(struct elem));
        if (e == NULL) {
            fprintf(stderr, "Errore di allocazione\n");
            exit(1);
        }
        printf("Elemento %d: ", i + 1);
        scanf("%d", &e->inf);
        e->pun = NULL;
        lista = insert_elem(lista, e);
    }
    return lista;
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
