/*
 * Esercizio 8
 *
 * Scrivere la funzione insert_elem per lista doppia e la funzione
 * crea_lista_doppia(int n) che chiede all'utente n interi e
 * costruisce una lista doppia inserendo ogni elemento in testa.
 * Nel main, stamparla con stampa_lista.
 *
 * Hint per insert_elem (lista doppia):
 *   - collega e->pun = l  (come nella lista semplice)
 *   - imposta e->prec = NULL  (e e' la nuova testa)
 *   - se l non e' NULL, aggiorna l->prec = e
 */

#include <stdio.h>
#include <stdlib.h>

struct elem {
    int inf;
    struct elem *pun;
    struct elem *prec;
};

void stampa_lista(struct elem *p) {
    while (p != NULL) {
        printf("%d ", p->inf);
        p = p->pun;
    }
    printf("\n");
}

/* TODO: implementa insert_elem per lista doppia */
struct elem *insert_elem(struct elem *l, struct elem *e) {
    /* ... */
    return e;
}

/* TODO: implementa crea_lista_doppia */
struct elem *crea_lista_doppia(int n) {
    /* ... */
    return NULL;
}

int main(void) {
    int n;
    struct elem *lista;

    printf("Quanti elementi? ");
    scanf("%d", &n);

    lista = crea_lista_doppia(n);
    stampa_lista(lista);

    return 0;
}
