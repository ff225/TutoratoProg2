/*
 * Esercizio 1 - Costruzione di un albero binario
 *
 * Obiettivo: costruire manualmente in memoria il seguente albero binario
 * e stampare il valore della radice e dei suoi due figli diretti.
 *
 *         10
 *        /  \
 *       5    15
 *      / \
 *     3   7
 *
 * Suggerimento: usa la funzione new_node() per creare ogni nodo,
 * poi collega i figli sinistro e destro modificando i campi left e right.
 */

#include <stdio.h>
#include <stdlib.h>

typedef int tipo_inf;

struct bnode {
    tipo_inf inf;
    struct bnode* left;
    struct bnode* right;
};

/* Crea un nuovo nodo foglia con il valore dato. */
struct bnode* new_node(tipo_inf v) {
    struct bnode* n = malloc(sizeof(struct bnode));
    if (n == NULL) return NULL;
    n->inf = v;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main(void) {
    /* TODO 1: crea la radice con valore 10 */


    /* TODO 2: crea i figli della radice (valori 5 e 15) e collegali */


    /* TODO 3: crea i figli del nodo 5 (valori 3 e 7) e collegali */


    /* TODO 4: stampa il valore della radice e dei suoi due figli
     *         Output atteso:
     *         Radice: 10
     *         Figlio sinistro: 5
     *         Figlio destro: 15
     */


    /* Nota: in questo esercizio non liberiamo la memoria.
     * Vedremo come fare nell'esercizio 6 (free_tree). */

    return 0;
}