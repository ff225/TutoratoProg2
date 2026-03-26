#include <stdio.h>

int main(void){
    /*
     * REGOLA DELLA DIVISIONE: In C (dallo standard C99 in poi), 
     * la divisione tra interi viene sempre troncata verso lo ZERO.
     * Quindi -7 / 3 fa -2.333, che troncato verso zero diventa -2.
     * * REGOLA DEL RESTO (%): Il resto prende sempre il segno del 
     * dividendo (il numeratore, il numero a sinistra).
     * Quindi: 
     * -7 % 3 = -1 (il segno di -7)
     * 7 % -3 =  1 (il segno di 7)
     */
    printf("-7/3 = %d,  -7%%3 = %d\n", -7/3, -7%3); // Output: -2, -1
    printf(" 7/-3 = %d,  7%%-3 = %d\n", 7/-3, 7%-3); // Output: -2, 1

    /* * L'identità matematica a = (a/b)*b + a%b è sempre rispettata:
     * -7 = (-2 * 3) + (-1) -> -6 - 1 -> -7
     */
    return 0;
}