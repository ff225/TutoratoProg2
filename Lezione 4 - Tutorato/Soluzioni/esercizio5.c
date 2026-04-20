/*
 * Esercizio 5 - Stringhe (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

int conta_vocali(const char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            count++;
    }
    return count;
}

void stampa_al_contrario(const char *s) {
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
}

int main(void) {
    char s[MAX_LEN];

    printf("Inserisci una stringa: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Lunghezza: %d\n", (int)strlen(s));
    printf("Al contrario: ");
    stampa_al_contrario(s);
    printf("Vocali: %d\n", conta_vocali(s));

    return 0;
}
