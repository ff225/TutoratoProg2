#include <stdio.h>
#include <stdint.h>

uint32_t safe_shl(uint32_t x, unsigned s) {
    /*
     * ERRORE (UB): Shiftare di un numero di bit maggiore o uguale 
     * alla grandezza del tipo di dato (32 in questo caso) in C
     * è un Undefined Behavior. Il processore potrebbe dare risultati strani.
     * * SOLUZIONE: Controllare sempre il parametro 's' (shift).
     */
    if (s >= 32) {
        return 0u; // Se shiftiamo oltre i 32 bit, restituiamo 0 per sicurezza
    }
    return x << s;

    // Versione compatta usando l'operatore ternario:
    //return s>=32 ? 0u : x << s; // Se s è 32 o più, restituiamo 0, altrimenti facciamo lo shift
    
}

int main(void) {
    uint32_t x = 1u;
    
    printf("Shift di 31: %u\n", safe_shl(x, 31)); // Corretto: stampa 2147483648
    printf("Shift di 32: %u\n", safe_shl(x, 32)); // Fuori range: stampa 0 protetto
    
    return 0;
}