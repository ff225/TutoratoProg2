/*
 * Esercizio 4 - Enum (SOLUZIONE)
 * Lezione 4 - Tutorато Programmazione 2
 *
 */

#include <stdio.h>

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

void stampa_appuntamento(appuntamento_t a) {
    printf("Appuntamento: %s alle %02d:%02d\n",
           giorno_in_stringa(a.giorno), a.ora, a.minuti);
}

int e_feriale(appuntamento_t a) {
    return a.giorno >= LUNEDI && a.giorno <= VENERDI;
}


int main(void) {
    appuntamento_t a1 = { .giorno = LUNEDI,   .ora =  9, .minuti = 30 };
    appuntamento_t a2 = { .giorno = MERCOLEDI, .ora = 14, .minuti =  0 };
    appuntamento_t a3 = { .giorno = SABATO,   .ora = 11, .minuti = 15 };

    appuntamento_t appuntamenti[] = { a1, a2, a3 };
    int n = 3;

    for (int i = 0; i < n; i++) {
        stampa_appuntamento(appuntamenti[i]);
        if (e_feriale(appuntamenti[i]))
            printf("  --> Giorno feriale\n");
        else
            printf("  --> Weekend\n");
    }

    return 0;
}
