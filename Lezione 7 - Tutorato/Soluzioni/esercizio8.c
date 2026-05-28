/*
 * Esercizio 8 - Inserimento in un BST (SOLUZIONE)
 *
 * La funzione restituisce la radice (eventualmente modificata).
 * Quando trova un sottoalbero NULL, e' la' che va il nuovo nodo.
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

void print_inorder(struct bnode* n) {
    if (n == NULL) return;
    print_inorder(n->left);
    printf("%d ", n->inf);
    print_inorder(n->right);
}

/* Inserimento ricorsivo in BST.
 *   - se il sottoalbero e' vuoto, qui va il nuovo nodo
 *   - altrimenti scendi a sinistra o a destra in base al confronto
 *   - i duplicati vengono ignorati (lasciamo l'albero invariato)
 * In ogni caso si restituisce la radice del sottoalbero.
 */
struct bnode* bst_insert(struct bnode* n, tipo_key v) {
    if (n == NULL) return new_node(v);
    if (v < n->inf)      n->left  = bst_insert(n->left, v);
    else if (v > n->inf) n->right = bst_insert(n->right, v);
    /* se v == n->inf: nessuna modifica */
    return n;
}

int main(void) {
    struct bnode* root = NULL;

    root = bst_insert(root, 10);
    root = bst_insert(root, 5);
    root = bst_insert(root, 15);
    root = bst_insert(root, 3);
    root = bst_insert(root, 7);

    /* Duplicato: viene ignorato */
    root = bst_insert(root, 10);

    printf("Inorder: ");
    print_inorder(root);
    printf("\n");

    free_tree(root);
    return 0;
}