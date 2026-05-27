/*
 * Esercizio 10 - Programma BST completo
 *
 * Obiettivo: mettere insieme tutto quello che abbiamo costruito.
 * Il programma:
 *   1) Inizializza un BST inserendo i valori di un array hardcoded
 *   2) Stampa l'albero in inorder, preorder e postorder
 *   3) Esegue una serie di ricerche su chiavi miste (presenti/assenti)
 *      e ne stampa l'esito
 *   4) Libera la memoria
 *
 * Tutti i valori sono hardcoded: niente input da tastiera.
 * Lo scheletro fornisce gia' le funzioni di base (insert, search,
 * le tre visite, free_tree). Il tuo compito e' SOLO la funzione main.
 *
 * Array di valori da inserire: {50, 30, 70, 20, 40, 60, 80, 35, 45}
 * Chiavi da cercare:           {40, 25, 80, 100, 50}
 *
 * Output atteso:
 *   Inorder:   20 30 35 40 45 50 60 70 80
 *   Preorder:  50 30 20 40 35 45 70 60 80
 *   Postorder: 20 35 45 40 30 60 80 70 50
 *   Cerco 40:  TROVATO
 *   Cerco 25:  NON TROVATO
 *   Cerco 80:  TROVATO
 *   Cerco 100: NON TROVATO
 *   Cerco 50:  TROVATO
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

    /* TODO 1: inserisci nel BST tutti i valori dell'array da_inserire.
     * Ricorda: root = bst_insert(root, valore);
     */


    /* TODO 2: stampa l'albero nei tre ordini, ciascuno su una riga,
     * con etichetta. Esempio:
     *   Inorder: 20 30 35 40 45 50 60 70 80
     */


    /* TODO 3: per ogni chiave in da_cercare, cerca nel BST e
     * stampa "Cerco N: TROVATO" oppure "Cerco N: NON TROVATO".
     */


    /* TODO 4: libera la memoria dell'albero */


    return 0;
}