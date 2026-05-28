/*
 * Esercizio 6 - Visita in postorder e liberazione della memoria (SOLUZIONE)
 *
 * Entrambe le funzioni seguono lo schema postorder:
 *   sottoalbero sinistro -> sottoalbero destro -> nodo
 *
 * Per free_tree l'ordine e' obbligatorio: bisogna liberare i figli
 * PRIMA del nodo, altrimenti dopo free(n) perdiamo i puntatori
 * left e right e non possiamo piu' raggiungere i sottoalberi.
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

/* Postorder: ricorri a sinistra, ricorri a destra, visita. */
void print_postorder(struct bnode* n) {
    if (n == NULL) return;
    print_postorder(n->left);
    print_postorder(n->right);
    printf("%d ", n->inf);
}

/* Libera l'albero in postorder: prima i figli, poi il nodo. */
void free_tree(struct bnode* n) {
    if (n == NULL) return;
    free_tree(n->left);
    free_tree(n->right);
    free(n);
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Postorder: ");
    print_postorder(root);
    printf("\n");

    free_tree(root);
    printf("Memoria liberata.\n");

    return 0;
}