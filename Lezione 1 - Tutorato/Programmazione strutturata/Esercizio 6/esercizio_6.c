#include <stdio.h>

int main(void) {
    // Definizione dei parametri forniti
    int n = 10; // Numero di valori da generare
    int m = 16; // Modulo (il limite massimo dei numeri generati sarà m-1, ovvero 15)
    int a = 2;  // Moltiplicatore
    int c = 0;  // Incremento
    int x = 5;  // Seed (Seme iniziale)

    printf("--- Generatore Lineare Congruente ---\n");
    printf("Parametri: a=%d, c=%d, m=%d, Seme(x0)=%d\n\n", a, c, m, x);

    // Iteriamo esattamente 'n' volte
    for (int i = 0; i < n; i++) {
        /*
         * IL CUORE DELL'ALGORITMO:
         * x = (a * x + c) % m
         * * Al primo giro: x = (9 * 5 + 3) % 16 = 48 % 16 = 0
         * Al secondo giro: x = (9 * 0 + 3) % 16 = 3 % 16 = 3
         * Al terzo giro: x = (9 * 3 + 3) % 16 = 30 % 16 = 14
         * E così via...
         */
        x = (a * x + c) % m;
        
        printf("Iterazione %2d:  x = %2d\n", i + 1, x);
    }

    return 0;
}