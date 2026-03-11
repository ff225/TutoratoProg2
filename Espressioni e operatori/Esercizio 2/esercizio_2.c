#include <stdio.h>

int main(void) {
    int x = 0;

    /* * Il problema: Se facciamo semplicemente (10 / x) > 1 quando x è 0, 
     * il programma va in crash (Division by zero).
     *
     * La soluzione: Sfruttare lo "short-circuit" (cortocircuito) dell'operatore logico &&.
     * Il C valuta le espressioni logiche da sinistra verso destra.
     * Se la prima condizione (x != 0) è FALSA, l'intero AND logico (&&) 
     * sarà per forza falso, a prescindere dal resto. 
     * Quindi, per "pigrizia" ed efficienza, il compilatore NON VALUTA 
     * la parte a destra del &&, salvandoci dal crash.
     */
    if (x != 0 && (10 / x) > 1) {
        puts("ok");
    } else {
        puts("x e' zero oppure il rapporto non e' > 1");
    }

    return 0;
}