/*
 * Esercizio 2 - Conta i nodi di un albero binario
 *
 * Obiettivo: implementare la funzione count_nodes che, dato un albero
 * binario, restituisce il numero totale di nodi presenti.
 *
 * Albero di test (5 nodi):
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
 *
 * Suggerimento: pensa ricorsivamente.
 *   - caso base: se il nodo e' NULL, quanti nodi ci sono?
 *   - caso ricorsivo: nodi totali = 1 (questo nodo)
 *                                 + nodi nel sottoalbero sinistro
 *                                 + nodi nel sottoalbero destro
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

/* TODO: implementa count_nodes
 * Riceve la radice di un albero binario (puo' essere NULL).
 * Restituisce il numero totale di nodi nell'albero.
 */
int count_nodes(struct bnode* root) {
    /* TODO */
    return 0;
}

int main(void) {
    /* Costruzione albero di test */
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Numero di nodi: %d\n", count_nodes(root));
    /* Output atteso: 5 */

    /* Test su albero vuoto */
    printf("Nodi in albero vuoto: %d\n", count_nodes(NULL));
    /* Output atteso: 0 */

    return 0;
}