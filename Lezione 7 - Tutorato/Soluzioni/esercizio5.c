/*
 * Esercizio 5 - Visita in inorder (SOLUZIONE)
 *
 * Ordine: sottoalbero sinistro -> radice -> sottoalbero destro
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

/* Visita inorder: ricorri a sinistra, visita, ricorri a destra. */
void print_inorder(struct bnode* n) {
    if (n == NULL) return;
    print_inorder(n->left);
    printf("%d ", n->inf);
    print_inorder(n->right);
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

    return 0;
}