/*
 * Esercizio 3 - Altezza di un albero binario
 *
 * Obiettivo: implementare la funzione tree_height che restituisce
 * l'altezza dell'albero, ovvero la lunghezza del cammino piu' lungo
 * dalla radice a una foglia.
 *
 * Convenzioni:
 *   - albero vuoto (NULL):  altezza = -1
 *   - albero con un solo nodo: altezza = 0
 *   - in generale: altezza = numero di archi nel cammino piu' lungo
 *
 * Albero di test:
 *         10           livello 0
 *        /  \
 *       5    15        livello 1
 *      / \
 *     3   7            livello 2
 *
 * Altezza attesa: 2
 *
 * Suggerimento:
 *   - caso base: se il nodo e' NULL ritorna -1
 *   - caso ricorsivo: altezza = 1 + max(altezza_sinistro, altezza_destro)
 *
 * Funzione helper utile: int max(int a, int b)
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

/* Restituisce il massimo tra due interi. */
int max(int a, int b) {
    return (a > b) ? a : b;
}

/* TODO: implementa tree_height */
int tree_height(struct bnode* root) {
    /* TODO */
    return 0;
}

int main(void) {
    /* Albero di test */
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Altezza albero: %d\n", tree_height(root));
    /* Output atteso: 2 */

    printf("Altezza albero vuoto: %d\n", tree_height(NULL));
    /* Output atteso: -1 */

    /* Albero con un solo nodo */
    struct bnode* singolo = new_node(42);
    printf("Altezza albero singolo nodo: %d\n", tree_height(singolo));
    /* Output atteso: 0 */

    return 0;
}