#include <stdio.h>
#include <stdint.h>

uint32_t READ = 1u<<0;  // 0001
uint32_t WRITE = 1u<<1; // 0010
uint32_t EXEC = 1u<<2;  // 0100

// Accende il bit: L'OR (|) inserisce 1 dove la maschera 'f' ha 1, il resto non cambia.
uint32_t set_flag(uint32_t x, uint32_t f) { 
    return x | f; 
}

// Spegne il bit: Si inverte 'f' (es. ~0100 diventa 1011). 
// L'AND logico forza a 0 solo il bit corrispondente.
uint32_t clear_flag(uint32_t x, uint32_t f) { 
    return x & ~f; 
}

// Controlla il bit: L'AND isola il bit desiderato. Se il risultato non è 0, il bit era acceso.
int has_flag(uint32_t x, uint32_t f) { 
    return (x & f) != 0; 
}

// Inverte il bit: Lo XOR (^) cambia il bit. 1^1 fa 0, 0^1 fa 1.
uint32_t toggle_flag(uint32_t x, uint32_t f) { 
    return x ^ f; 
}

int main(void) {
    uint32_t p = READ | WRITE; // Partiamo con READ e WRITE accesi (0011)
    
    p = set_flag(p, WRITE);    // WRITE è già acceso, resta acceso
    p = clear_flag(p, EXEC);   // EXEC non era acceso, non cambia nulla
    p = toggle_flag(p, READ);  // READ era acceso, lo spegniamo (resta solo WRITE, ovvero 2)
    
    printf("p = %u  hasW = %d\n", p, has_flag(p, WRITE)); // Atteso: p=2, hasW=1
    
    return 0;
}