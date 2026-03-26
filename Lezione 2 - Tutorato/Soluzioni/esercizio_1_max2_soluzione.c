#include <stdio.h>

/*
 * ESERCIZIO 1: max2 - Base
 * SOLUZIONE COMMENTATA
 * 
 * Questo esercizio introduce il pattern fondamentale:
 * 1. Controllo NULL come prima cosa
 * 2. Esecuzione della logica
 * 3. Scrittura nei parametri output
 * 4. Ritorno di un codice di successo/errore
 */

/*
 * Funzione che calcola il massimo di due numeri.
 * 
 * Pattern di error handling:
 * - Controlla le precondizioni SUBITO
 * - Se qualcosa non va, restituisci un codice di errore (0)
 * - Scrivi nei parametri output solo se tutto è valido
 * - Se tutto va bene, restituisci 1
 * 
 * Questo pattern rende la funzione robusta e prevenire crash
 * da dereferenziazione di NULL.
 */
int max2(int a, int b, int *out_max) {
    // CONTROLLO PRECONDIZIONI
    // Prima cosa: verifichiamo che il puntatore non sia NULL
    // Dereferenziare NULL causerebbe un crash!
    if (out_max == NULL) {
        printf("Errore: out_max è NULL\n");
        return 0;  // Restituiamo un codice di errore
    }
    
    // CALCOLO
    // Ora che sappiamo che out_max è valido, possiamo usarlo
    // Determiniamo il massimo usando un'istruzione condizionale
    if (a >= b) {
        *out_max = a;  // Scriviamo a nel parametro output
    } else {
        *out_max = b;  // Scriviamo b nel parametro output
    }
    
    // RITORNO DI SUCCESSO
    return 1;  // Tutto è andato bene
}

int main() {
    printf("ESERCIZIO 1: Massimo di due numeri\n");
    printf("==================================\n\n");
    
    // Variabile per il risultato
    int result_max;
    
    // TEST 1: Numeri diversi
    printf("TEST 1: Numeri diversi (3 e 8)\n");
    if (max2(3, 8, &result_max) == 1) {
        // Successo
        printf("Massimo: %d\n", result_max);
        printf("Risultato corretto: %s\n", result_max == 8 ? "SÌ" : "NO");
    } else {
        printf("Errore nella chiamata\n");
    }
    
    // TEST 2: Numeri uguali
    printf("\nTEST 2: Numeri uguali (5 e 5)\n");
    if (max2(5, 5, &result_max) == 1) {
        // Successo
        printf("Massimo: %d\n", result_max);
        printf("Risultato corretto: %s\n", result_max == 5 ? "SÌ" : "NO");
    } else {
        printf("Errore nella chiamata\n");
    }
    
    // TEST 3: Puntatore NULL
    printf("\nTEST 3: Puntatore NULL\n");
    int ret = max2(1, 9, NULL);  // Passiamo NULL
    if (ret == 0) {
        // Errore atteso
        printf("Correttamente rilevato errore NULL\n");
    } else {
        printf("ERRORE: avrebbe dovuto rilevare NULL!\n");
    }
    
    // TEST 4: Numeri negativi (bonus)
    printf("\nTEST 4: Numeri negativi (-10 e -5)\n");
    if (max2(-10, -5, &result_max) == 1) {
        printf("Massimo: %d\n", result_max);
        printf("Risultato corretto: %s\n", result_max == -5 ? "SÌ" : "NO");
    }
    
    // TEST 5: Uno negativo, uno positivo
    printf("\nTEST 5: Negativo e positivo (-3 e 7)\n");
    if (max2(-3, 7, &result_max) == 1) {
        printf("Massimo: %d\n", result_max);
        printf("Risultato corretto: %s\n", result_max == 7 ? "SÌ" : "NO");
    }
   
    return 0;
}