#include <stdio.h>

int main(void) {
    int k = 5;

    /*
     * ERRORE (UB - Undefined Behavior): int j = ++k - k++;
     * Stiamo modificando la variabile 'k' due volte all'interno della
     * stessa espressione senza un punto di sequenza (sequence point).
     * Il compilatore può decidere in che ordine fare gli incrementi, 
     * rendendo il risultato imprevedibile.
     *
     * SOLUZIONE: Spezzare in più istruzioni chiare.
     */
    k++;              // Corrisponde al ++k iniziale
    int left = k;     // Salviamo il valore
    int right = k;    // Salviamo il valore prima del secondo incremento
    k++;              // Corrisponde al k++ finale
    int j = left - right;
    
    printf("k=%d, j=%d\n", k, j);

    int i = 0;
    int a[3] = {0};

    /*
     * ERRORE (UB): a[i] = i++;
     * Stiamo usando 'i' per calcolare l'indice dell'array, ma allo 
     * stesso tempo stiamo modificando 'i'. Anche qui, l'ordine non è garantito.
     *
     * SOLUZIONE: Usare variabili temporanee.
     */
    int idx = i;      // Leggiamo il valore attuale di i
    i++;              // Incrementiamo i in modo sicuro, in un'istruzione a sé
    a[idx] = idx;     // Usiamo il valore salvato

    printf("i=%d, a[0]=%d\n", i, a[0]);

    return 0;
}