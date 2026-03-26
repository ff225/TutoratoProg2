#include <stdio.h>

/*
 * ESERCIZIO 2: divmod - Intermedio
 * SOLUZIONE COMMENTATA
 * 
 * Questo esercizio estende il pattern base con:
 * 1. Molteplici precondizioni
 * 2. Due parametri output
 * 3. Separazione chiara tra controllo e calcolo
 */

/*
 * Funzione che calcola quoziente e resto di una divisione intera.
 * 
 * Pattern di error handling avanzato:
 * - Controlla TUTTE le precondizioni insieme (per chiarezza)
 * - Restituisce un codice di errore comune se qualcosa non va
 * - Scrive su ENTRAMBI i parametri output solo se tutto è valido
 * - Questo evita inconsistenze (es. calcolare solo q senza r)
 * 
 * Dimostra anche come operano gli operatori / e % in C con numeri negativi.
 */
int divmod(int a, int b, int *q, int *r) {
    // CONTROLLO PRECONDIZIONI
    // Controlliamo tutte le precondizioni insieme
    if (b == 0 || q == NULL || r == NULL) {
        // Se qualsiasi condizione è violata, restituiamo errore
        // Nota: non scriviamo nei parametri output!
        return 0;
    }
    
    // CALCOLO (solo se tutte le precondizioni sono soddisfatte)
    // Calcoliamo quoziente e resto
    *q = a / b;  // Quoziente della divisione intera
    *r = a % b;  // Resto della divisione
    
    // RITORNO DI SUCCESSO
    return 1;
}

int main() {
    printf("ESERCIZIO 2: Divisione intera (quoziente e resto)\n");
    printf("=================================================\n\n");
    
    int quotient, remainder;
    
    // TEST 1: Divisione normale
    printf("TEST 1: 17 / 5\n");
    if (divmod(17, 5, &quotient, &remainder) == 1) {
        printf("Quoziente: %d, Resto: %d\n", quotient, remainder);
        printf("Verifica: %d * 5 + %d = %d (atteso 17)\n", 
               quotient, remainder, quotient * 5 + remainder);
    } else {
        printf("Errore nella divisione\n");
    }
    
    // TEST 2: Divisione per zero
    printf("\nTEST 2: 17 / 0 (divisione per zero)\n");
    int ret = divmod(17, 0, &quotient, &remainder);
    if (ret == 0) {
        printf("Errore correttamente rilevato: divisione per zero\n");
    } else {
        printf("ERRORE: avrebbe dovuto rilevare divisione per zero!\n");
    }
    
    // TEST 3: Puntatore q NULL
    printf("\nTEST 3: 17 / 5 con puntatore q NULL\n");
    ret = divmod(17, 5, NULL, &remainder);
    if (ret == 0) {
        printf("Errore correttamente rilevato: puntatore NULL\n");
    } else {
        printf("ERRORE: avrebbe dovuto rilevare NULL!\n");
    }
    
    // TEST 4: Puntatore r NULL
    printf("\nTEST 4: 17 / 5 con puntatore r NULL\n");
    ret = divmod(17, 5, &quotient, NULL);
    if (ret == 0) {
        printf("Errore correttamente rilevato: puntatore NULL\n");
    } else {
        printf("ERRORE: avrebbe dovuto rilevare NULL!\n");
    }
    
    // TEST 5: Divisione esatta
    printf("\nTEST 5: 20 / 5 (divisione esatta)\n");
    if (divmod(20, 5, &quotient, &remainder) == 1) {
        printf("Quoziente: %d, Resto: %d\n", quotient, remainder);
        printf("Verifica: %d * 5 + %d = %d (atteso 20)\n",
               quotient, remainder, quotient * 5 + remainder);
    }
    
    // TEST 6: Numeri negativi (bonus - comportamento di / e % in C)
    printf("\nTEST 6: -17 / 5 (numero negativo)\n");
    if (divmod(-17, 5, &quotient, &remainder) == 1) {
        printf("Quoziente: %d, Resto: %d\n", quotient, remainder);
        printf("Nota: in C, il comportamento con numeri negativi è \"troncato verso zero\"\n");
        printf("Verifica: %d * 5 + %d = %d (atteso -17)\n",
               quotient, remainder, quotient * 5 + remainder);
    }
    
    // TEST 7: Entrambi negativi
    printf("\nTEST 7: -20 / -3 (entrambi negativi)\n");
    if (divmod(-20, -3, &quotient, &remainder) == 1) {
        printf("Quoziente: %d, Resto: %d\n", quotient, remainder);
        printf("Verifica: %d * (-3) + %d = %d (atteso -20)\n",
               quotient, remainder, quotient * (-3) + remainder);
    }
  
    return 0;
}