/*
 * Esercizio 2 - Conta i nodi di un albero binario (SOLUZIONE)
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

/* Conta ricorsivamente i nodi dell'albero.
 *   - caso base: albero vuoto -> 0 nodi
 *   - caso ricorsivo: 1 (nodo corrente) + nodi sx + nodi dx
 */
int count_nodes(struct bnode* root) {
    if (root == NULL) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Numero di nodi: %d\n", count_nodes(root));
    printf("Nodi in albero vuoto: %d\n", count_nodes(NULL));

    return 0;
}