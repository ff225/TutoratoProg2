#include <stdio.h>

/*
 * MINI-ESERCIZI: Operatori & (indirizzo-di) e * (dereferenziazione)
 * SOLUZIONE COMMENTATA
 * 
 * Questo file mostra come dichiarare puntatori, ottenere indirizzi,
 * dereferenziare e modificare variabili tramite puntatori.
 */

/* 
 * ESERCIZIO 1: Dichiarare puntatori e ottenere indirizzi
 */
void esercizio1_indirizzi() {
    printf("\n=== ESERCIZIO 1: Indirizzi ===\n");
    
    // Dichiariamo tre variabili intere con valori diversi
    int a = 10;
    int b = 20;
    int c = 30;
    
    // Dichiariamo tre puntatori a int
    // int *pa significa: "pa è un puntatore a int"
    int *pa;
    int *pb;
    int *pc;
    
    // Assegniamo ai puntatori gli indirizzi delle variabili
    // L'operatore & restituisce l'indirizzo della variabile
    pa = &a;  // pa contiene l'indirizzo di a
    pb = &b;  // pb contiene l'indirizzo di b
    pc = &c;  // pc contiene l'indirizzo di c
    
    // Stampiamo valore e indirizzo di a
    printf("a = %d, indirizzo di a = %p\n", a, (void*)&a);
    printf("pa contiene l'indirizzo %p (deve essere uguale a &a)\n", (void*)pa);
    
    // Stampiamo per b
    printf("b = %d, indirizzo di b = %p\n", b, (void*)&b);
    printf("pb contiene l'indirizzo %p (deve essere uguale a &b)\n", (void*)pb);
    
    // Stampiamo per c
    printf("c = %d, indirizzo di c = %p\n", c, (void*)&c);
    printf("pc contiene l'indirizzo %p (deve essere uguale a &c)\n", (void*)pc);
}

/*
 * ESERCIZIO 2: Dereferenziazione e modifica tramite puntatore
 */
void esercizio2_dereferenziazione() {
    printf("\n=== ESERCIZIO 2: Dereferenziazione ===\n");
    
    // Dichiariamo una variabile
    int x = 42;
    
    // Dichiariamo un puntatore a x
    int *px = &x;  // px contiene l'indirizzo di x
    
    // Stampiamo il valore di x tramite il puntatore
    // *px significa: "accedi al valore all'indirizzo contenuto in px"
    printf("Valore di x tramite puntatore: %d\n", *px);
    
    // Modifichiamo il valore di x tramite il puntatore
    // *px = 100 significa: "memorizza 100 all'indirizzo contenuto in px"
    *px = 100;
    
    // Stampiamo il nuovo valore di x (sia direttamente che tramite puntatore)
    printf("Nuovo valore di x: %d\n", x);
    printf("Nuovo valore tramite *px: %d\n", *px);
    // Entrambi stampano 100 perché x è stato modificato tramite *px
}

/*
 * ESERCIZIO 3: Catena di operatori
 * 
 * Dimostra come & e * sono operatori inversi:
 * - & passa da variabile → indirizzo
 * - * passa da indirizzo → variabile
 */
void esercizio3_catena_operatori() {
    printf("\n=== ESERCIZIO 3: Catena di Operatori ===\n");
    
    // Dichiariamo una variabile
    int y = 100;
    
    // Dichiariamo un puntatore a y
    int *py = &y;
    
    // Stampiamo tutti e quattro i "livelli"
    printf("y = %d\n", y);                    // Valore diretto di y
    printf("py (indirizzo) = %p\n", (void*)py);           // Indirizzo contenuto nel puntatore
    printf("*py (valore) = %d\n", *py);      // Valore all'indirizzo (deve essere uguale a y)
    printf("&y (indirizzo di y) = %p\n", (void*)&y);      // Indirizzo di y (deve essere uguale a py)
    
    // Dimostrazione di equivalenza:
    printf("\nDimostrazioni di equivalenza:\n");
    printf("py == &y? %s\n", py == &y ? "Sì" : "No");     // Devono essere uguali
    printf("*py == y? %s\n", *py == y ? "Sì" : "No");     // Devono essere uguali
    printf("&(*py) == py? %s\n", &(*py) == py ? "Sì" : "No");  // L'indirizzo del valore puntato
    printf("*(&y) == y? %s\n", *(&y) == y ? "Sì" : "No");      // Il valore del suo indirizzo
}

/*
 * ESERCIZIO 4: Scambio di due variabili tramite puntatori
 * 
 * Questo è un esempio di procedura (una funzione che modifica i parametri).
 * Usiamo puntatori per passare le variabili per riferimento.
 */
void scambia(int *a, int *b) {
    // Dichiariamo una variabile temporanea
    int temp;
    
    // Salviamo il valore puntato da a nella variabile temporanea
    temp = *a;  // temp contiene il valore originale di a
    
    // Assegniamo il valore puntato da b ad a
    *a = *b;    // a ora contiene il valore originale di b
    
    // Assegniamo il valore temporaneo (originale a) a b
    *b = temp;  // b ora contiene il valore originale di a
    
    // Risultato: a e b sono stati scambiati!
}

void esercizio4_scambio() {
    printf("\n=== ESERCIZIO 4: Scambio di Variabili ===\n");
    
    // Dichiariamo due variabili
    int x = 5;
    int y = 10;
    
    printf("Prima dello scambio: x = %d, y = %d\n", x, y);
    
    // Chiamiamo scambia con gli indirizzi di x e y
    // Passiamo per riferimento: la funzione scambia modifica x e y direttamente
    scambia(&x, &y);
    
    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);
    // Ora x = 10, y = 5
}

int main() {
    printf("MINI-ESERCIZI: Operatori & e * - SOLUZIONE\n");
    printf("==========================================\n");
    
    esercizio1_indirizzi();
    esercizio2_dereferenziazione();
    esercizio3_catena_operatori();
    esercizio4_scambio();
    
    printf("\n==========================================\n");
    printf("Fine esercizi\n");
    
    return 0;
}