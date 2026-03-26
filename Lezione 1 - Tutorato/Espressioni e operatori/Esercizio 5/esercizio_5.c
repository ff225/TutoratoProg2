#include <stdio.h>
#include <limits.h>

unsigned sub_u(unsigned a, unsigned b){
    /* * Se a < b (es. 1 - 2), non potendo esistere numeri negativi 
     * negli unsigned, il valore fa il "giro" (wrap-around) partendo 
     * dal valore massimo possibile (UINT_MAX).
     */
    return a - b; 
}

long long subtract_safe(unsigned a, unsigned b){
    /*
     * Per restituire il vero valore matematico (-1) dobbiamo usare
     * un tipo di dato che possa contenere sia numeri grandi (da unsigned)
     * sia il segno meno (signed). Il long long è perfetto.
     * Dobbiamo fare il casting PRIMA della sottrazione!
     */
    return (long long)a - b;
}

int main(void){
    unsigned a = 1u, b = 2u;
    
    printf("a-b unsigned = %u\n", sub_u(a, b));
    printf("a-b safe = %lld\n", subtract_safe(a, b));
    printf("UINT_MAX = %u\n", UINT_MAX);
    
    return 0;
}