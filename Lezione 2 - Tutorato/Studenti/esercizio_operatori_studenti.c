#include <stdio.h>

/*
 * MINI-ESERCIZI: Operatori & (indirizzo-di) e * (dereferenziazione)
 * 
 * Obiettivo: Comprendere come funzionano gli operatori & e *
 *            e come dichiarare/usare puntatori.
 * 
 * Completa le funzioni seguendo i commenti TODO.
 */

/* 
 * ESERCIZIO 1: Dichiarare puntatori e ottenere indirizzi
 * 
 * Completa il codice per:
 * 1. Dichiarare tre variabili intere (a, b, c)
 * 2. Dichiarare tre puntatori a int (pa, pb, pc)
 * 3. Assegnare ai puntatori gli indirizzi delle variabili (usando &)
 * 4. Stampare gli indirizzi e i valori
 */
void esercizio1_indirizzi() {
    printf("\n=== ESERCIZIO 1: Indirizzi ===\n");
    
    // TODO: Dichiara tre variabili intere a=10, b=20, c=30
    
    
    // TODO: Dichiara tre puntatori a int
    
    
    // TODO: Assegna ai puntatori gli indirizzi delle variabili usando &
    
    
    // TODO: Stampa il valore e l'indirizzo di a usando printf
    // Formati: %d per int, %p per puntatori (cast a void*)
    
    
    // TODO: Stampa lo stesso per b e c
    
    
}

/*
 * ESERCIZIO 2: Dereferenziazione e modifica tramite puntatore
 * 
 * Completa il codice per:
 * 1. Dichiarare una variabile x = 42
 * 2. Dichiarare un puntatore a x
 * 3. Leggere e stampare il valore tramite il puntatore (usando *)
 * 4. Modificare il valore tramite il puntatore
 * 5. Stampare il nuovo valore
 */
void esercizio2_dereferenziazione() {
    printf("\n=== ESERCIZIO 2: Dereferenziazione ===\n");
    
    // TODO: Dichiara una variabile int x = 42
    
    
    // TODO: Dichiara un puntatore a x e assegnagli l'indirizzo
    
    
    // TODO: Stampa il valore di x tramite il puntatore usando *
    printf("Valore di x tramite puntatore: %d\n", /* TODO: cosa stampi qui? */);
    
    
    // TODO: Modifica il valore di x tramite il puntatore (assegna 100)
    
    
    // TODO: Stampa il nuovo valore di x (sia direttamente che tramite puntatore)
    
    
}

/*
 * ESERCIZIO 3: Catena di operatori
 * 
 * Completa il codice per comprendere come & e * si annullano a vicenda.
 * 
 * Se p = &x, allora:
 * - &p è l'indirizzo del puntatore
 * - *p è il valore di x
 * - &(*p) è l'indirizzo di x (cioè p stesso)
 * - *(&x) è il valore di x (cioè x stesso)
 */
void esercizio3_catena_operatori() {
    printf("\n=== ESERCIZIO 3: Catena di Operatori ===\n");
    
    // TODO: Dichiara int y = 100
    
    
    // TODO: Dichiara un puntatore py che punta a y
    
    
    // TODO: Stampa y, py, *py e &y
    // Aiuto: 
    // - y è il valore
    // - py è l'indirizzo contenuto nel puntatore
    // - *py è il valore puntato (deve essere uguale a y)
    // - &y è l'indirizzo di y (deve essere uguale a py)
    
    printf("y = %d\n", /* TODO */);
    printf("py (indirizzo) = %p\n", (void*) /* TODO */);
    printf("*py (valore) = %d\n", /* TODO */);
    printf("&y (indirizzo di y) = %p\n", (void*) /* TODO */);
    
    
}

/*
 * ESERCIZIO 4: Scambio di due variabili tramite puntatori
 * 
 * Scrivi una funzione che scambia due variabili usando puntatori
 * come parametri (passaggio per riferimento).
 * 
 * Firma: void scambia(int *a, int *b)
 * 
 * Dentro la funzione devi scambiare i valori puntati da a e b.
 * Usa una variabile temporanea per farlo correttamente.
 */
void scambia(int *a, int *b) {
    // TODO: Dichiara una variabile temporanea
    // TODO: Salva il valore puntato da a nella temp
    // TODO: Assegna il valore puntato da b ad a
    // TODO: Assegna la temp a b
    
}

void esercizio4_scambio() {
    printf("\n=== ESERCIZIO 4: Scambio di Variabili ===\n");
    
    // TODO: Dichiara due variabili: int x = 5, int y = 10
    
    
    printf("Prima dello scambio: x = ?, y = ?\n");  // TODO: stampa x e y
    
    // TODO: Chiama scambia con gli indirizzi di x e y
    
    
    printf("Dopo lo scambio: x = ?, y = ?\n");  // TODO: stampa x e y
    
}

int main() {
    printf("MINI-ESERCIZI: Operatori & e *\n");
    printf("================================\n");
    
    esercizio1_indirizzi();
    esercizio2_dereferenziazione();
    esercizio3_catena_operatori();
    esercizio4_scambio();
    
    printf("\n================================\n");
    printf("Fine esercizi\n");
    
    return 0;
}