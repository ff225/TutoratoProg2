/*
 * Esercizio 7 - Conta le foglie di un albero binario (SOLUZIONE)
 *
 * Tre casi:
 *   - albero vuoto: 0 foglie
 *   - nodo senza figli: 1 foglia
 *   - nodo con almeno un figlio: somma foglie dei sottoalberi
 */

#include <stdio.h>
#include <stdlib.h>

typedef int tipo_inf;

struct bnode {
    tipo_inf inf;
    struct bnode* left;
    struct bnode* right;
};

struct bnode* new_node(tipo_inf v) {
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

int count_leaves(struct bnode* n) {
    if (n == NULL) return 0;
    /* Foglia: nessun figlio. */
    if (n->left == NULL && n->right == NULL) return 1;
    /* Altrimenti somma le foglie dei due sottoalberi. */
    return count_leaves(n->left) + count_leaves(n->right);
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Numero di foglie: %d\n", count_leaves(root));
    printf("Foglie in albero vuoto: %d\n", count_leaves(NULL));

    struct bnode* singolo = new_node(42);
    printf("Foglie in albero singolo nodo: %d\n", count_leaves(singolo));

    free_tree(root);
    free_tree(singolo);

    return 0;
}