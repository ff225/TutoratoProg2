#include <stdio.h>
#include <stddef.h>  /* per size_t */

/*
 * ESERCIZIO 3: Operazioni su Array - Avanzato
 * 
 * Obiettivo: Applicare divide et impera a un problema su array.
 *            Scomporre il problema in funzioni helper indipendenti.
 * 
 * Dato un array di interi, scrivi un programma che calcoli:
 * 1. Massimo dell'array
 * 2. Media aritmetica dell'array
 * 3. Numero di elementi positivi
 * 
 * Requisiti:
 * - Non scrivere tutto in una sola funzione
 * - Scomponi il problema in almeno 3 funzioni helper
 * - Usa const per l'array (input non modificabile)
 * - Usa parametri output per i risultati
 * - Gestisci errori: array NULL, n == 0, output NULL
 * 
 */

/*
 * Funzione che calcola il massimo di un array.
 * 
 * Parametri:
 *   a: puntatore all'array (const, non modificabile)
 *   n: numero di elementi
 *   out_max: puntatore dove salvare il massimo
 * 
 * Ritorna:
 *   0 se errore (array NULL, n == 0, out_max NULL)
 *   1 se successo
 * 
 * Note:
 * - const significa che la funzione non modificherà l'array
 * - size_t è il tipo per le dimensioni (come lunghezza di array)
 */
int max_array(const int *a, size_t n, int *out_max) {
    // TODO: Controlla le precondizioni
    //       - a non è NULL
    //       - n > 0 (almeno un elemento)
    //       - out_max non è NULL
    //       Se qualcosa manca, restituisci 0
    
    
    // TODO: Itera l'array per trovare il massimo
    //       Inizia con max = a[0]
    //       Confronta ogni elemento con il massimo attuale
    //       Aggiorna il massimo se necessario
    
    
    // TODO: Salva il risultato in *out_max e restituisci 1
    
}

/*
 * Funzione che calcola la media aritmetica di un array.
 * 
 * Parametri:
 *   a: puntatore all'array (const)
 *   n: numero di elementi
 *   out_media: puntatore dove salvare la media (double!)
 * 
 * Ritorna:
 *   0 se errore
 *   1 se successo
 * 
 * Note:
 * - La media è un valore in virgola mobile (double)
 * - Per evitare perdita di precisione, calcola la somma come double
 */
int media_array(const int *a, size_t n, double *out_media) {
    // TODO: Controlla le precondizioni
    //       Se qualcosa manca, restituisci 0
    
    
    // TODO: Calcola la somma degli elementi
    //       Itera l'array e somma tutti i valori
    //       (Suggerimento: dichiara sum come double per evitare overflow)
    
    
    // TODO: Calcola la media: sum / n
    //       Salva il risultato in *out_media
    //       Restituisci 1
    
}

/*
 * Funzione che conta gli elementi positivi di un array.
 * 
 * Parametri:
 *   a: puntatore all'array (const)
 *   n: numero di elementi
 * 
 * Ritorna:
 *   -1 se errore (array NULL o n == 0)
 *   >= 0 il numero di elementi positivi (altrimenti)
 * 
 * Note:
 * - Questa funzione restituisce direttamente il conteggio
 * - Un elemento è positivo se > 0
 */
int conta_positivi(const int *a, size_t n) {
    // TODO: Controlla le precondizioni
    //       Se array è NULL o n == 0, restituisci -1
    
    
    // TODO: Itera l'array e conta gli elementi positivi (> 0)
    //       Restituisci il conteggio
    
}

int main() {
    printf("ESERCIZIO 3: Operazioni su Array\n");
    printf("=================================\n\n");
    
    // Array di test
    int arr[] = {3, -2, 7, 4, 0};
    size_t len = 5;  // size_t è il tipo corretto per le dimensioni
    
    printf("Array: {");
    for (size_t i = 0; i < len; ++i) {
        printf("%d", arr[i]);
        if (i < len - 1) printf(", ");
    }
    printf("}\n\n");
    
    // TODO: Usa le tre funzioni helper per calcolare:
    //       1. Massimo (salva in una variabile int max_val)
    //       2. Media (salva in una variabile double media_val)
    //       3. Conteggio positivi (salva in una variabile int pos_count)
    
    // TODO: Per ognuna:
    //       - Chiama la funzione con gli argomenti appropriati
    //       - Controlla il valore di ritorno
    //       - Se successo, stampa il risultato
    //       - Se errore, stampa un messaggio di errore
    
    
    
    
    // TODO: Stampa i risultati finali in questo formato:
    //       Massimo:       X
    //       Media:         X.X
    //       Positivi:      X
    
    
    printf("\n=================================\n");
    
    // TEST BONUS: Array NULL (gestione errori)
    printf("\nTEST BONUS: Gestione errori\n");
    // TODO: Prova a chiamare una funzione con array NULL
    //       Verifica che restituisca 0 (errore)
    
    
    // TODO: Prova a chiamare una funzione con n == 0
    //       Verifica che restituisca 0 (errore)
    
    
    return 0;
}