#include <stdio.h>

int clamp(int x, int lo, int hi) {
    /*
     * L'operatore ternario funziona così: (condizione) ? se_vero : se_falso;
     * È ottimo per espressioni brevi, ma può diventare illeggibile se annidato.
     *
     * Logica:
     * 1. x è minore del limite inferiore? Se sì, ritorna 'lo'.
     * 2. Se no, x è maggiore del limite superiore? Se sì, ritorna 'hi'.
     * 3. Altrimenti, ritorna 'x'.
     * * NOTA DIDATTICA: Abbiamo usato molte parentesi per rendere
     * evidente l'ordine delle operazioni.
     */
    return (x < lo) ? lo : ((x > hi) ? hi : x);
}

int main(void) {
    printf("Clamp sotto range (-3): %d\n", clamp(-3, 0, 10)); // Output: 0
    printf("Clamp in range (7):     %d\n", clamp(7, 0, 10));  // Output: 7
    printf("Clamp sopra range (42): %d\n", clamp(42, 0, 10)); // Output: 10
    
    return 0;
}