/*
 * Esercizio 7 - Conta le foglie di un albero binario
 *
 * Obiettivo: implementare la funzione count_leaves che, dato un
 * albero binario, restituisce il numero di FOGLIE (nodi che non
 * hanno alcun figlio, ne' sinistro ne' destro).
 *
 * Albero di test:
 *         10
 *        /  \
 *       5    15      <- 15 e' foglia
 *      / \
 *     3   7          <- 3 e 7 sono foglie
 *
 * Numero di foglie atteso: 3
 *
 * Suggerimento:
 *   - caso base 1: nodo NULL -> 0 foglie
 *   - caso base 2: nodo senza figli -> e' una foglia, ritorna 1
 *   - caso ricorsivo: somma foglie del sottoalbero sx e dx
 *
 * Attenzione: il caso "nodo NULL" e il caso "foglia" sono diversi.
 * Un nodo che ha un solo figlio NON e' una foglia.
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

void free_tree(struct bnode* n) {
    if (n == NULL) return;
    free_tree(n->left);
    free_tree(n->right);
    free(n);
}

/* TODO: implementa count_leaves */
int count_leaves(struct bnode* n) {
    /* TODO */
    return 0;
}

int main(void) {
    struct bnode* root = new_node(10);
    root->left  = new_node(5);
    root->right = new_node(15);
    root->left->left  = new_node(3);
    root->left->right = new_node(7);

    printf("Numero di foglie: %d\n", count_leaves(root));
    /* Output atteso: 3 */

    printf("Foglie in albero vuoto: %d\n", count_leaves(NULL));
    /* Output atteso: 0 */

    /* Albero con un solo nodo: la radice e' anche foglia */
    struct bnode* singolo = new_node(42);
    printf("Foglie in albero singolo nodo: %d\n", count_leaves(singolo));
    /* Output atteso: 1 */

    free_tree(root);
    free_tree(singolo);

    return 0;
}