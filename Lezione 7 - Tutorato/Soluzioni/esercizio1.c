/*
 * Esercizio 1 - Costruzione di un albero binario (SOLUZIONE)
 *
 * Costruzione manuale dell'albero:
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
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

int main(void) {
    /* Costruzione bottom-up: prima le foglie, poi i nodi interni.
     * (In alternativa si potrebbe creare la radice per prima e
     * agganciare via via i figli; entrambi gli approcci funzionano.) */

    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);

    /* Aggancio dei figli del nodo 5 */
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    /* Alternativa

    struct bnode* root = new_node(10);
    struct bnode* node_left = new_node(5);
    struct bnode* node_right = new_node(15);

    root->left  = node_left;
    root->right = node_right;

    /* Aggancio dei figli del nodo 5 * /
    node_left->left  = new_node(3);
    node_left->right = new_node(7);
    */


    /* Stampa di radice e figli diretti */
    printf("Radice: %d\n", root->inf);
    printf("Figlio sinistro: %d\n", root->left->inf);
    printf("Figlio destro: %d\n", root->right->inf);

    return 0;
}