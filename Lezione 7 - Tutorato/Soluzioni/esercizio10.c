/*
 * Esercizio 10 - Programma BST completo (SOLUZIONE)
 *
 * Mette insieme insert, search, le tre visite e free_tree
 * su un albero non banale costruito a partire da un array hardcoded.
 */

#include <stdio.h>
#include <stdlib.h>

typedef int tipo_key;

struct bnode {
    tipo_key inf;
    struct bnode* left;
    struct bnode* right;
};

struct bnode* new_node(tipo_key v) {
    struct bnode* n = malloc(sizeof(struct bnode));
    if (n == NULL) return NULL;
    n->inf = v;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct bnode* bst_insert(struct bnode* n, tipo_key v) {
    if (n == NULL) return new_node(v);
    if (v < n->inf)      n->left  = bst_insert(n->left, v);
    else if (v > n->inf) n->right = bst_insert(n->right, v);
    return n;
}

struct bnode* bst_search(struct bnode* n, tipo_key v) {
    if (n == NULL)   return NULL;
    if (v == n->inf) return n;
    if (v < n->inf)  return bst_search(n->left, v);
    else             return bst_search(n->right, v);
}

void print_preorder(struct bnode* n) {
    if (n == NULL) return;
    printf("%d ", n->inf);
    print_preorder(n->left);
    print_preorder(n->right);
}

void print_inorder(struct bnode* n) {
    if (n == NULL) return;
    print_inorder(n->left);
    printf("%d ", n->inf);
    print_inorder(n->right);
}

void print_postorder(struct bnode* n) {
    if (n == NULL) return;
    print_postorder(n->left);
    print_postorder(n->right);
    printf("%d ", n->inf);
}

void free_tree(struct bnode* n) {
    if (n == NULL) return;
    free_tree(n->left);
    free_tree(n->right);
    free(n);
}

int main(void) {
    struct bnode* root = NULL;
    int da_inserire[]  = {50, 30, 70, 20, 40, 60, 80, 35, 45};
    int n_inserire     = sizeof(da_inserire) / sizeof(da_inserire[0]);

    int da_cercare[]   = {40, 25, 80, 100, 50};
    int n_cercare      = sizeof(da_cercare) / sizeof(da_cercare[0]);

    /* 1) Inserimento di tutti i valori */
    for (int i = 0; i < n_inserire; i++)
        root = bst_insert(root, da_inserire[i]);

    /* 2) Stampa nei tre ordini */
    printf("Inorder:   "); print_inorder(root);   printf("\n");
    printf("Preorder:  "); print_preorder(root);  printf("\n");
    printf("Postorder: "); print_postorder(root); printf("\n");

    /* 3) Ricerche */
    for (int i = 0; i < n_cercare; i++) {
        struct bnode* r = bst_search(root, da_cercare[i]);
        printf("Cerco %d: %s\n",
               da_cercare[i],
               (r != NULL) ? "TROVATO" : "NON TROVATO");
    }

    /* 4) Liberazione memoria */
    free_tree(root);

    return 0;
}