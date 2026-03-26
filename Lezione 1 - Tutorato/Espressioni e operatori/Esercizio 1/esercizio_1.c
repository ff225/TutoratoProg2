#include <stdio.h>

int main(void) {
    int a = 2, b = 3, c = 4;

    /* * PARTE 1: Previsione e Parentesi Minime
     * L'operatore '+' ha priorità maggiore dello shift '<<'.
     * Quindi a+b<<2 viene valutato come (a+b) << 2.
     * 2+3 = 5. 5 in binario è 101. Shiftato a sinistra di 2 diventa 10100 (ovvero 20).
     */
    int x = (a + b) << 2; 

    /*
     * L'operatore '+' ha priorità maggiore di '&', ma le parentesi (b<<2) 
     * forzano prima lo shift.
     * (b<<2) -> 3 << 2 = 12.
     * a + 12 -> 2 + 12 = 14 (in binario 1110).
     * 14 & c -> 1110 & 0100 (4 in binario) = 0100 (ovvero 4).
     */
    int y = (a + (b << 2)) & c; 

    printf("x=%d y=%d\n", x, y); // Output atteso: x=20 y=4

    /* * PARTE 2 (Bonus): Versione "pulita" spezzata in più righe
     * Questa è la versione consigliata in produzione per evitare dubbi 
     * sulla precedenza degli operatori.
     */
    int sum = a + b;
    int x_clean = sum << 2;

    int sh = b << 2;
    int y_clean = (a + sh) & c;

    printf("Versione pulita -> x=%d y=%d\n", x_clean, y_clean);

    return 0;
}