#include <stdio.h>

/*
 * ESERCIZIO 1: max2 - Base
 * 
 * Obiettivo: Usare puntatori come parametri output e controllare NULL.
 * 
 * Traccia:
 * Scrivi una funzione int max2(int a, int b, int *out_max) che:
 * - Riceve due interi a e b
 * - Se out_max è NULL, restituisce 0 (errore)
 * - Altrimenti, salva in *out_max il massimo tra a e b
 *   e restituisce 1 (successo)
 * 
 */

/*
 * Funzione che calcola il massimo di due numeri.
 * 
 * Parametri:
 *   a, b: i due numeri da confrontare
 *   out_max: puntatore dove salvare il risultato
 * 
 * Ritorna:
 *   0 se out_max è NULL (errore)
 *   1 se il calcolo è andato a buon fine
 * 
 * Pattern di error handling:
 * - Il valore di ritorno indica successo/errore
 * - Il risultato viene scritto nel parametro output
 * - Controlliamo sempre NULL prima di dereferenziare
 */
int max2(int a, int b, int *out_max) {
    // TODO: Controlla se out_max è NULL
    //       Se lo è, restituisci 0
    
    
    // TODO: Determina il massimo tra a e b
    //       Salvalo in *out_max
    
    
    // TODO: Restituisci 1 (successo)
    
}

int main() {
    printf("ESERCIZIO 1: Massimo di due numeri\n");
    printf("==================================\n\n");
    
    // TODO: Dichiara una variabile per il risultato
    int result_max;
    
    // TEST 1: Numeri diversi
    printf("TEST 1: Numeri diversi (3 e 8)\n");
    // TODO: Chiama max2(3, 8, &result_max)
    //       Controlla il valore di ritorno
    //       Se successo, stampa il risultato
    
    
    // TEST 2: Numeri uguali
    printf("\nTEST 2: Numeri uguali (5 e 5)\n");
    // TODO: Chiama max2(5, 5, &result_max)
    //       Controlla il valore di ritorno
    //       Se successo, stampa il risultato
    
    
    // TEST 3: Puntatore NULL
    printf("\nTEST 3: Puntatore NULL\n");
    // TODO: Chiama max2(1, 9, NULL)
    //       Verifica che la funzione restituisca 0
    //       Stampa un messaggio di errore
    
    
    printf("\n==================================\n");
    
    return 0;
}