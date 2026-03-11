#include <stdio.h>

int main(void) {
    int s = -1;
    unsigned u = 1u;

    /*
     * DOMANDA: Perché s < u stampa 0 (Falso)? Matematicamente -1 è minore di 1!
     * * RISPOSTA: Le "Usual Arithmetic Conversions" del C. 
     * Quando confrontiamo un tipo 'signed' (int) con un 'unsigned', 
     * il compilatore "promuove" il signed a unsigned. 
     * -1 in binario (complemento a due) interpretato come unsigned 
     * diventa un numero gigantesco (4294967295 su 32 bit). 
     * Quindi il C sta chiedendo: "4294967295 è minore di 1?" -> Falso (0).
     */
    printf("Confronto UB: %d\n", s < u); 

    /*
     * SOLUZIONE 1: Cast a int (Pericoloso se 'u' è un numero enorme 
     * che non sta in un intero con segno).
     */
    printf("Cast a int: %d\n", s < (int)u);

    /*
     * SOLUZIONE 2: Promuovere entrambi a un tipo più capiente (Robusto).
     */
    printf("Cast a long long: %d\n", (long long)s < (long long)u); 

    return 0;
}