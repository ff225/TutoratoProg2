/*
 * Esercizio 4 - Visita in preorder
 *
 * Obiettivo: implementare la funzione print_preorder che stampa
 * i valori dei nodi dell'albero in ordine di visita preorder
 * (radice -> sottoalbero sinistro -> sottoalbero destro).
 *
 * Albero di test:
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
 *
 * Output atteso: 10 5 3 7 15
 *
 * Suggerimento: la struttura ricorsiva e' sempre:
 *   1) caso base: se nodo == NULL, esci
 *   2) caso ricorsivo: stampa, ricorri a sinistra, ricorri a destra
 *      (per il preorder l'ordine e': PRIMA stampa, POI ricorri)
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

/* TODO: implementa la visita in preorder */
void print_preorder(struct bnode* n) {
    /* TODO */
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Preorder: ");
    print_preorder(root);
    printf("\n");
    /* Output atteso: Preorder: 10 5 3 7 15 */

    return 0;
}