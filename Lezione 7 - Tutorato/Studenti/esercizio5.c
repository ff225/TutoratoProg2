/*
 * Esercizio 5 - Visita in inorder
 *
 * Obiettivo: implementare la funzione print_inorder che stampa
 * i valori dei nodi in ordine di visita inorder
 * (sottoalbero sinistro -> radice -> sottoalbero destro).
 *
 * Albero di test:
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
 *
 * Output atteso: 3 5 7 10 15
 *
 * Curiosita': nota che l'output e' ORDINATO in modo crescente.
 * Questo accade perche' l'albero di test e' un BST (lo vedremo
 * nel Blocco 3). L'inorder di un BST produce sempre la sequenza
 * ordinata dei suoi valori.
 *
 * Suggerimento: come per il preorder, ma la stampa va MESSA IN MEZZO
 * tra le due chiamate ricorsive.
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

/* TODO: implementa la visita in inorder */
void print_inorder(struct bnode* n) {
    /* TODO */
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Inorder: ");
    print_inorder(root);
    printf("\n");
    /* Output atteso: Inorder: 3 5 7 10 15 */

    return 0;
}