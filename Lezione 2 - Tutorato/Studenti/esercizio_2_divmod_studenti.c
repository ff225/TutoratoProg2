#include <stdio.h>

/*
 * ESERCIZIO 2: divmod - Intermedio
 * 
 * Obiettivo: Restituire due risultati e gestire gli errori in modo esplicito.
 * 
 * Traccia:
 * Scrivi una funzione int divmod(int a, int b, int *q, int *r) che:
 * - Riceve due interi a e b
 * - Se b == 0 oppure q == NULL o r == NULL, restituisce 0
 * - Altrimenti:
 *   * Calcola quoziente (a / b)
 *   * Calcola resto (a % b)
 *   * Scrive i risultati nei parametri output
 *   * Restituisce 1
 * 
 */

/*
 * Funzione che calcola quoziente e resto di una divisione intera.
 * 
 * Parametri:
 *   a: dividendo
 *   b: divisore
 *   q: puntatore dove salvare il quoziente
 *   r: puntatore dove salvare il resto
 * 
 * Ritorna:
 *   0 se errore (b == 0, oppure q/r sono NULL)
 *   1 se successo
 * 
 * Pattern avanzato:
 * - Molteplici precondizioni da controllare
 * - Due parametri output
 * - Separazione tra controllo errori e calcolo
 */
int divmod(int a, int b, int *q, int *r) {
    // TODO: Controlla le precondizioni:
    //       1. b != 0 (altrimenti divisione per zero)
    //       2. q != NULL (altrimenti non posso salvare il quoziente)
    //       3. r != NULL (altrimenti non posso salvare il resto)
    //       Se una qualsiasi precondizione è violata, restituisci 0
    
    
    // TODO: Se tutte le precondizioni sono soddisfatte:
    //       Calcola il quoziente: q = a / b
    //       Calcola il resto: r = a % b
    //       Scrivi i risultati negli output usando i puntatori
    
    
    // TODO: Restituisci 1 (successo)
    
}

int main() {
    printf("ESERCIZIO 2: Divisione intera (quoziente e resto)\n");
    printf("=================================================\n\n");
    
    // Variabili per i risultati
    int quotient, remainder;
    
    // TEST 1: Divisione normale
    printf("TEST 1: 17 / 5\n");
    // TODO: Chiama divmod(17, 5, &quotient, &remainder)
    //       Controlla il valore di ritorno
    //       Se successo, stampa quoziente e resto
    //       Se errore, stampa un messaggio di errore
    
    
    // TEST 2: Divisione per zero
    printf("\nTEST 2: 17 / 0 (divisione per zero)\n");
    // TODO: Chiama divmod(17, 0, &quotient, &remainder)
    //       Verifica che restituisca 0 (errore)
    //       Stampa un messaggio di errore appropriato
    
    
    // TEST 3: Puntatore q NULL
    printf("\nTEST 3: Puntatore q NULL\n");
    // TODO: Chiama divmod(17, 5, NULL, &remainder)
    //       Verifica che restituisca 0 (errore)
    //       Stampa un messaggio di errore appropriato
    
    
    // TEST 4: Puntatore r NULL
    printf("\nTEST 4: Puntatore r NULL\n");
    // TODO: Chiama divmod(17, 5, &quotient, NULL)
    //       Verifica che restituisca 0 (errore)
    //       Stampa un messaggio di errore appropriato
    
    
    // TEST 5: Divisione esatta (resto 0)
    printf("\nTEST 5: 20 / 5 (divisione esatta)\n");
    // TODO: Chiama divmod(20, 5, &quotient, &remainder)
    //       Se successo, stampa quoziente (4) e resto (0)
    
    
    printf("\n=================================================\n");
    
    return 0;
}