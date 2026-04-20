/*
 * Esercizio 10 - fgets + Struct + Enum + Array di Struct (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_APPUNTAMENTI 10

typedef enum {
    LUNEDI = 1, MARTEDI, MERCOLEDI,
    GIOVEDI, VENERDI, SABATO, DOMENICA
} giorno_t;

typedef struct {
    giorno_t giorno;
    int ora;
    int minuti;
} appuntamento_t;


const char *giorno_in_stringa(giorno_t g) {
    switch (g) {
        case LUNEDI:    return "Lunedi";
        case MARTEDI:   return "Martedi";
        case MERCOLEDI: return "Mercoledi";
        case GIOVEDI:   return "Giovedi";
        case VENERDI:   return "Venerdi";
        case SABATO:    return "Sabato";
        case DOMENICA:  return "Domenica";
        default:        return "Sconosciuto";
    }
}

int e_feriale(appuntamento_t a) {
    return a.giorno >= LUNEDI && a.giorno <= VENERDI;
}

void leggi_appuntamento(appuntamento_t *a) {
    char buf[16];

    printf("  Giorno (1=Lun, 2=Mar, 3=Mer, 4=Gio, 5=Ven, 6=Sab, 7=Dom): ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';
    a->giorno = (giorno_t)atoi(buf);

    printf("  Ora: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';
    a->ora = atoi(buf);

    printf("  Minuti: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';
    a->minuti = atoi(buf);
}

void stampa_appuntamento(appuntamento_t a) {
    printf("- %s alle %02d:%02d\n",
           giorno_in_stringa(a.giorno), a.ora, a.minuti);
}


int main(void) {
    appuntamento_t appuntamenti[MAX_APPUNTAMENTI];
    char buf[16];
    int n;

    printf("Quanti appuntamenti? (max %d): ", MAX_APPUNTAMENTI);
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = '\0';
    n = atoi(buf);

    if (n < 1 || n > MAX_APPUNTAMENTI) {
        fprintf(stderr, "Numero non valido. Inserire un valore tra 1 e %d.\n",
                MAX_APPUNTAMENTI);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Appuntamento %d:\n", i + 1);
        leggi_appuntamento(&appuntamenti[i]);
    }

    printf("\nAppuntamenti feriali:\n");
    int trovati = 0;
    for (int i = 0; i < n; i++) {
        if (e_feriale(appuntamenti[i])) {
            stampa_appuntamento(appuntamenti[i]);
            trovati++;
        }
    }
    if (trovati == 0)
        printf("Nessuno.\n");

    return 0;
}
