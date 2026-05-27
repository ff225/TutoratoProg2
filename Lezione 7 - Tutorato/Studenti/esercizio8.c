/*
 * Esercizio 8 - Inserimento in un BST
 *
 * Obiettivo: implementare la funzione bst_insert che inserisce un
 * nuovo valore in un Albero Binario di Ricerca (BST), mantenendo
 * la proprieta' di ordinamento.
 *
 * Pattern importante: la funzione RITORNA la radice (modificata o no)
 * del sottoalbero. L'uso tipico e':
 *   albero = bst_insert(albero, valore);
 *
 * Questo serve perche' al primo inserimento la radice passa da NULL
 * a un nodo nuovo: senza riassegnazione si perderebbe.
 *
 * Comportamento atteso:
 *   - se l'albero e' vuoto -> il nuovo valore diventa la radice
 *   - se v < radice.inf    -> inserimento ricorsivo a sinistra
 *   - se v > radice.inf    -> inserimento ricorsivo a destra
 *   - se v == radice.inf   -> NIENTE (no duplicati)
 *
 * Test: inseriamo i valori 10, 5, 15, 3, 7 e stampiamo l'albero
 * in inorder (deve uscire ordinato: 3 5 7 10 15).
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

void free_tree(struct bnode* n) {
    if (n == NULL) return;
    free_tree(n->left);
    free_tree(n->right);
    free(n);
}

void print_inorder(struct bnode* n) {
    if (n == NULL) return;
    print_inorder(n->left);
    printf("%d ", n->inf);
    print_inorder(n->right);
}

/* TODO: implementa bst_insert */
struct bnode* bst_insert(struct bnode* n, tipo_key v) {
    /* TODO */
    return n;
}

int main(void) {
    struct bnode* root = NULL;

    /* Inserimenti: ricordati di riassegnare sempre root! */
    root = bst_insert(root, 10);
    root = bst_insert(root, 5);
    root = bst_insert(root, 15);
    root = bst_insert(root, 3);
    root = bst_insert(root, 7);

    /* Test inserimento duplicato (deve essere ignorato) */
    root = bst_insert(root, 10);

    printf("Inorder: ");
    print_inorder(root);
    printf("\n");
    /* Output atteso: Inorder: 3 5 7 10 15 */

    free_tree(root);
    return 0;
}