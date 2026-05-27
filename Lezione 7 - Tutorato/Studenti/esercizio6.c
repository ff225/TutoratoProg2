/*
 * Esercizio 6 - Visita in postorder e liberazione della memoria
 *
 * Questo esercizio chiede DUE funzioni che condividono la stessa
 * struttura ricorsiva (entrambe lavorano in postorder).
 *
 * Parte A) print_postorder
 *   Stampa i valori dell'albero in ordine postorder
 *   (sottoalbero sinistro -> sottoalbero destro -> radice).
 *
 * Parte B) free_tree
 *   Libera tutta la memoria allocata per l'albero.
 *   DEVE seguire l'ordine postorder: prima i figli, poi il nodo,
 *   altrimenti perderemmo l'accesso ai sottoalberi.
 *
 * Albero di test:
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
 *
 * Output atteso per print_postorder: 3 7 5 15 10
 *
 * Suggerimento per free_tree: la struttura e' identica a
 * print_postorder, ma invece di printf si chiama free(n).
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

/* TODO Parte A: implementa print_postorder */
void print_postorder(struct bnode* n) {
    /* TODO */
}

/* TODO Parte B: implementa free_tree.
 * IMPORTANTE: dopo free(n) il puntatore non e' piu' valido.
 * Non accedere ai suoi campi dopo averlo liberato.
 */
void free_tree(struct bnode* n) {
    /* TODO */
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
    /* Output atteso: Postorder: 3 7 5 15 10 */

    /* Libera tutta la memoria dell'albero */
    free_tree(root);
    printf("Memoria liberata.\n");

    return 0;
}