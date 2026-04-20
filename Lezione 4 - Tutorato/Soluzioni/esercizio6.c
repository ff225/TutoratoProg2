/*
 * Esercizio 6 - Anagrammi (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 64
#define ALFABETO 26

int sono_anagrammi(const char *s1, const char *s2) {
    int contatori[ALFABETO] = {0};

    /* Incrementa per ogni lettera di s1 */
    for (int i = 0; s1[i] != '\0'; i++)
        contatori[s1[i] - 'a']++;

    /* Decrementa per ogni lettera di s2 */
    for (int i = 0; s2[i] != '\0'; i++)
        contatori[s2[i] - 'a']--;

    /* Se tutti i contatori sono 0, le stringhe sono anagrammi */
    for (int i = 0; i < ALFABETO; i++)
        if (contatori[i] != 0)
            return 0;

    return 1;
}

int main(void) {
    char s1[MAX_LEN], s2[MAX_LEN];

    printf("Inserisci la prima stringa:  ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Inserisci la seconda stringa: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (sono_anagrammi(s1, s2))
        printf("\"%s\" e \"%s\" sono anagrammi.\n", s1, s2);
    else
        printf("\"%s\" e \"%s\" non sono anagrammi.\n", s1, s2);

    return 0;
}
