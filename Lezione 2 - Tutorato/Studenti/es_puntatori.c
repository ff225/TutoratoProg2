#include <stdio.h>

int main() {
    int x = 42;
    int *px = &x;    // px punta a x
    
    printf("Valore di x:     %d\n", x);      // 42
    printf("Indirizzo di x:  %p\n", (void*)&x);  // 0x7fff5f00 (esempio)
    printf("Puntatore px:    %p\n", (void*)px);  // 0x7fff5f00 (stesso!)
    printf("Valore tramite puntatore: %d\n", *px);  // 42
    
    *px = 100;       // Modifico il valore tramite puntatore
    printf("Nuovo valore di x: %d\n", x);  // 100
    
    return 0;
}