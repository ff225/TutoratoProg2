/*
 * Esercizio 9 - Ricerca in un BST (SOLUZIONE)
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

/* Ricerca ricorsiva.
 * Ad ogni passo si sceglie un solo ramo (sinistro o destro)
 * grazie alla proprieta' di ordinamento del BST.
 */
struct bnode* bst_search(struct bnode* n, tipo_key v) {
    if (n == NULL)   return NULL;
    if (v == n->inf) return n;
    if (v < n->inf)  return bst_search(n->left, v);
    else             return bst_search(n->right, v);
}

int main(void) {
    struct bnode* root = NULL;
    int valori[] = {10, 5, 15, 3, 7, 20};
    int n = sizeof(valori) / sizeof(valori[0]);

    for (int i = 0; i < n; i++)
        root = bst_insert(root, valori[i]);

    int da_cercare[] = {7, 20, 10};
    for (int i = 0; i < 3; i++) {
        struct bnode* r = bst_search(root, da_cercare[i]);
        if (r != NULL) printf("Trovato: %d\n", r->inf);
        else           printf("NON trovato: %d\n", da_cercare[i]);
    }

    int assenti[] = {42, 1, 100};
    for (int i = 0; i < 3; i++) {
        struct bnode* r = bst_search(root, assenti[i]);
        if (r != NULL) printf("Trovato: %d\n", r->inf);
        else           printf("NON trovato: %d\n", assenti[i]);
    }

    struct bnode* r = bst_search(NULL, 5);
    printf("Ricerca su albero vuoto: %s\n", r == NULL ? "vuoto" : "errore");

    free_tree(root);
    return 0;
}