/*
 * Esercizio 9 - Ricerca in un BST
 *
 * Obiettivo: implementare la funzione bst_search che cerca una chiave
 * in un BST sfruttando la proprieta' di ordinamento.
 *
 * Comportamento atteso:
 *   - se l'albero e' vuoto      -> NULL (non trovato)
 *   - se v == radice.inf         -> ritorna il puntatore al nodo trovato
 *   - se v < radice.inf          -> cerca a sinistra
 *   - se v > radice.inf          -> cerca a destra
 *
 * Differenza con la ricerca in un albero binario qualunque: qui
 * ad ogni nodo si sceglie UN SOLO ramo, non entrambi. E' questo
 * che rende la ricerca efficiente.
 *
 * L'albero di test viene costruito inserendo i valori
 * 10, 5, 15, 3, 7, 20 e si cercheranno valori sia presenti che assenti.
 */

#include <stdio.h>
#include <stdlib.h>

typedef int tipo_key;

struct bnode {
    tipo_key inf;
    struct bnode* left;
    struct bnode* right;
};

struct bnode* new_node(tipo_key v) {
    struct bnode* n = malloc(sizeof(struct bnode));
    if (n == NULL) return NULL;
    n->inf = v;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void free_tree(struct bnode* n) {
    if (n == NULL) return;
    free_tree(n->left);
    free_tree(n->right);
    free(n);
}

struct bnode* bst_insert(struct bnode* n, tipo_key v) {
    if (n == NULL) return new_node(v);
    if (v < n->inf)      n->left  = bst_insert(n->left, v);
    else if (v > n->inf) n->right = bst_insert(n->right, v);
    return n;
}

/* TODO: implementa bst_search
 * Ritorna il puntatore al nodo che contiene v, oppure NULL.
 */
struct bnode* bst_search(struct bnode* n, tipo_key v) {
    /* TODO */
    return NULL;
}

int main(void) {
    struct bnode* root = NULL;
    int valori[] = {10, 5, 15, 3, 7, 20};
    int n = sizeof(valori) / sizeof(valori[0]);

    for (int i = 0; i < n; i++)
        root = bst_insert(root, valori[i]);

    /* Test ricerca: chiavi presenti */
    int da_cercare[] = {7, 20, 10};
    for (int i = 0; i < 3; i++) {
        struct bnode* r = bst_search(root, da_cercare[i]);
        if (r != NULL) printf("Trovato: %d\n", r->inf);
        else           printf("NON trovato: %d\n", da_cercare[i]);
    }

    /* Test ricerca: chiavi assenti */
    int assenti[] = {42, 1, 100};
    for (int i = 0; i < 3; i++) {
        struct bnode* r = bst_search(root, assenti[i]);
        if (r != NULL) printf("Trovato: %d\n", r->inf);
        else           printf("NON trovato: %d\n", assenti[i]);
    }

    /* Ricerca su albero vuoto */
    struct bnode* r = bst_search(NULL, 5);
    printf("Ricerca su albero vuoto: %s\n", r == NULL ? "NULL (corretto)" : "errore");

    free_tree(root);
    return 0;
}