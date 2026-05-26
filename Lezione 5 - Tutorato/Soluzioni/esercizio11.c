/*
 * Soluzione Esercizio 11
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

        if (sscanf(buf, " %c", &cmd) != 1)
            continue;

        switch (cmd) {
        case 'i':
            if (sscanf(buf, " %c %d", &cmd, &val) != 2) {
                printf("Uso: i <valore>\n");
                break;
            }
            e = malloc(sizeof(struct elem));
            if (e == NULL) { fprintf(stderr, "Errore\n"); exit(1); }
            e->inf  = val;
            e->pun  = NULL;
            e->prec = NULL;
            lista = insert_elem(lista, e);
            printf("Inserito %d\n", val);
            break;

        case 'd':
            if (sscanf(buf, " %c %d", &cmd, &val) != 2) {
                printf("Uso: d <valore>\n");
                break;
            }
            lista = cancella_doppia(lista, val);
            printf("Cancellate tutte le occorrenze di %d\n", val);
            break;

        case 's':
            if (sscanf(buf, " %c %d", &cmd, &val) != 2) {
                printf("Uso: s <valore>\n");
                break;
            }
            if (search(lista, val) != NULL)
                printf("%d trovato\n", val);
            else
                printf("%d non trovato\n", val);
            break;

        case 'p':
            stampa_lista(lista);
            break;

        case 'r':
            stampa_inversa(lista);
            break;

        case 'q':
            return 0;

        default:
            printf("Comando non riconosciuto\n");
            break;
        }
    }

    return 0;
}
