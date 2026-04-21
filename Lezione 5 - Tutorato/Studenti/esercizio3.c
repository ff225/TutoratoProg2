/*
 * Esercizio 3
 *
 * Scrivere un programma che:
 *   1. Apre in scrittura binaria il file "people.dat"
 *   2. Chiede all'utente di inserire i dati di 3 persone
 *   3. Per ogni persona, scrive il record su file con fwrite
 *
 * Hint:
 *   - Leggi le stringhe con fgets(buf, sizeof(buf), stdin)
 *     e ricordati di rimuovere il '\n' finale
 *   - Per il carattere sesso, leggi con fgets e prendi buf[0]
 *   - Per anno_nascita, leggi con fgets e converti con atoi()
 *   - Usa sizeof(struct persona) in fwrite
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * TODO: completa la definizione della struct persona.
 *
 * Una persona e' descritta da:
 *   - cognome      : stringa di al piu' 30 caratteri
 *   - nome         : stringa di al piu' 30 caratteri
 *   - sesso        : un singolo carattere ('M', 'F', 'N')
 *   - anno_nascita : un intero
 *
 * Hint: per una stringa di al piu' 30 caratteri dichiara
 * un array char di dimensione 31 (ricorda il terminatore '\0').
 */
struct persona {
    /* ... */
};

int main(void) {
    struct persona p;
    char buf[64];
    int i;
    FILE *fp;

    /* TODO: apri "people.dat" in scrittura binaria */
    fp = /* ??? */;

    /* TODO: controlla se l'apertura ha avuto successo */

    for (i = 0; i < 3; i++) {
        printf("\n--- Persona %d ---\n", i + 1);

        /* TODO: leggi il cognome con fgets e rimuovi '\n' */
        printf("Cognome: ");

        /* TODO: leggi il nome con fgets e rimuovi '\n' */
        printf("Nome: ");

        /* TODO: leggi il sesso con fgets e prendi il primo carattere */
        printf("Sesso (M/F/N): ");

        /* TODO: leggi l'anno di nascita con fgets e converti con atoi */
        printf("Anno di nascita: ");

        /* TODO: scrivi il record p su file con fwrite */
    }

    /* TODO: chiudi il file */

    printf("\nInserimento completato.\n");
    return 0;
}
