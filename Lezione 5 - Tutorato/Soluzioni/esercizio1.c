/*
 * Soluzione Esercizio 1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeri[5] = {10, 20, 30, 40, 50};
    FILE *fp;

    fp = fopen("numeri.dat", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Errore: impossibile aprire il file\n");
        return 1;
    }

    fwrite(numeri, sizeof(int), 5, fp);

    fclose(fp);
    printf("Scrittura completata: 5 interi scritti in numeri.dat\n");
    return 0;
}
