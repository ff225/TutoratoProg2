/*
 * Esercizio 11
 *
 * Scrivere un programma con menu' interattivo che gestisce
 * una lista doppia di interi. I comandi sono:
 *
 *   i <valore>  — inserisce il valore in testa
 *   d <valore>  — cancella tutte le occorrenze del valore
 *   s <valore>  — cerca il valore e stampa se e' presente
 *   p           — stampa la lista (avanti)
 *   r           — stampa la lista al contrario
 *   q           — termina il programma
 *
 * Hint:
 *   - leggi il comando con fgets + sscanf
 *   - per i e d, leggi anche il valore con sscanf
 *   - riusa le funzioni gia' scritte negli esercizi precedenti
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void stampa_inversa(struct elem *l) {
    struct elem *p = l;
    if (p == NULL) { printf("\n"); return; }
    while (p->pun != NULL)
        p = p->pun;
    while (p != NULL) {
        printf("%d ", p->inf);
        p = p->prec;
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

struct elem *cancella_doppia(struct elem *l, int v) {
    struct elem *e;
    while ((e = search(l, v)) != NULL)
        l = delete_elem(l, e);
    return l;
}

int main(void) {
    struct elem *lista = NULL;
    char buf[64];
    char cmd;
    int val;
    struct elem *e;

    printf("Comandi: i <val>  d <val>  s <val>  p  r  q\n");

    while (1) {
        printf("> ");
        if (fgets(buf, sizeof(buf), stdin) == NULL)
            break;

        /* TODO: leggi il comando da buf con sscanf */

        /* TODO: gestisci i casi: i, d, s, p, r, q */
    }

    return 0;
}
