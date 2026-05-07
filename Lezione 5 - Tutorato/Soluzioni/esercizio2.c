/*
 * Soluzione Esercizio 2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeri[100];
    size_t letti;
    int i;
    FILE *fp;

    fp = fopen("numeri.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Errore: impossibile aprire il file\n");
        return 1;
    }

    letti = fread(numeri, sizeof(int), 100, fp);

    fclose(fp);

    printf("Letti %zu interi da numeri.dat:\n", letti);
    for (i = 0; i < (int)letti; i++) {
        printf("  numeri[%d] = %d\n", i, numeri[i]);
    }

    return 0;
}
