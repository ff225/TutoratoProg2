/*
 * Esercizio 4 - Visita in preorder (SOLUZIONE)
 *
 * Ordine: radice -> sottoalbero sinistro -> sottoalbero destro
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

/* Visita preorder: visita PRIMA il nodo, poi ricorri sui figli. */
void print_preorder(struct bnode* n) {
    if (n == NULL) return;
    printf("%d ", n->inf);
    print_preorder(n->left);
    print_preorder(n->right);
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

    return 0;
}