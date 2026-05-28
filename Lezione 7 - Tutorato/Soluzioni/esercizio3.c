/*
 * Esercizio 3 - Altezza di un albero binario (SOLUZIONE)
 *
 * Convenzioni:
 *   - albero vuoto:        altezza = -1
 *   - albero con un nodo:  altezza = 0
 *   - generale:            altezza = numero di archi nel cammino piu' lungo
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

int max(int a, int b) {
    return (a > b) ? a : b;
}

/* Altezza dell'albero.
 *   - caso base: albero vuoto -> -1 (cosi' un singolo nodo ha altezza 0)
 *   - caso ricorsivo: 1 + il massimo tra le altezze dei due sottoalberi
 */
int tree_height(struct bnode* root) {
    if (root == NULL) return -1;
    return 1 + max(tree_height(root->left), tree_height(root->right));
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Altezza albero: %d\n", tree_height(root));
    printf("Altezza albero vuoto: %d\n", tree_height(NULL));

    struct bnode* singolo = new_node(42);
    printf("Altezza albero singolo nodo: %d\n", tree_height(singolo));

    return 0;
}