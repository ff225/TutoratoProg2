#include <stdio.h>
#include <stddef.h>  /* per size_t */

/*
 * ESERCIZIO 3: Operazioni su Array - Avanzato
 * SOLUZIONE COMMENTATA
 * 
 * Questo esercizio dimostra:
 * 1. Decomposizione di un problema in funzioni helper
 * 2. Funzioni indipendenti che fanno una cosa sola
 * 3. Gestione coerente di errori in più funzioni
 * 4. Uso di const per proteggere l'input
 * 5. Uso di size_t per dimensioni
 * 6. Tipo double per calcoli in virgola mobile
 */

/*
 * Funzione che calcola il massimo di un array.
 * 
 * Strategie:
 * - Controlla le precondizioni SUBITO
 * - Usa const per il parametro array (protezione logica)
 * - Inizia con il primo elemento come massimo
 * - Itera dal secondo elemento per aggiornare il massimo
 */
int max_array(const int *a, size_t n, int *out_max) {
    // CONTROLLO PRECONDIZIONI
    if (a == NULL || n == 0 || out_max == NULL) {
        printf("Errore in max_array: precondizioni non soddisfatte\n");
        return 0;
    }
    
    // CALCOLO DEL MASSIMO
    // Iniziamo col primo elemento come massimo
    int max = a[0];
    
    // Iteriamo dal secondo elemento in poi
    // Nota: size_t è unsigned, quindi usiamo size_t per il contatore
    for (size_t i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    // SALVATAGGIO DEL RISULTATO
    *out_max = max;
    return 1;
}

/*
 * Funzione che calcola la media aritmetica di un array.
 * 
 * Attenzione:
 * - Sommiamo come double per evitare overflow degli interi
 * - La media è restituita come double
 */
int media_array(const int *a, size_t n, double *out_media) {
    // CONTROLLO PRECONDIZIONI
    if (a == NULL || n == 0 || out_media == NULL) {
        printf("Errore in media_array: precondizioni non soddisfatte\n");
        return 0;
    }
    
    // CALCOLO DELLA SOMMA
    // Dichiariamo sum come double per evitare overflow
    double sum = 0.0;
    for (size_t i = 0; i < n; ++i) {
        sum += a[i];  // Aggiungiamo ogni elemento
    }
    
    // CALCOLO DELLA MEDIA
    // Dividiamo la somma per il numero di elementi
    double media = sum / n;
    
    // SALVATAGGIO DEL RISULTATO
    *out_media = media;
    return 1;
}

/*
 * Funzione che conta gli elementi positivi di un array.
 * 
 * Nota:
 * - Questa funzione restituisce direttamente il conteggio
 * - Restituisce -1 in caso di errore (convenzione speciale)
 * - Un elemento è positivo se > 0 (0 NON è positivo)
 */
int conta_positivi(const int *a, size_t n) {
    // CONTROLLO PRECONDIZIONI
    if (a == NULL || n == 0) {
        printf("Errore in conta_positivi: precondizioni non soddisfatte\n");
        return -1;  // Codice di errore: -1
    }
    
    // CONTEGGIO DEGLI ELEMENTI POSITIVI
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        if (a[i] > 0) {  // Positivo significa > 0 (non >= 0)
            count++;
        }
    }
    
    // RITORNO DEL CONTEGGIO
    return count;  // Ritorna direttamente il conteggio
}

int main() {
    printf("ESERCIZIO 3: Operazioni su Array - SOLUZIONE\n");
    printf("=================================\n\n");
    
    // Array di test: {3, -2, 7, 4, 0}
    // Massimo atteso: 7
    // Media attesa: (3 - 2 + 7 + 4 + 0) / 5 = 12 / 5 = 2.4
    // Positivi attesi: 3 (i valori 3, 7, 4)
    int arr[] = {3, -2, 7, 4, 0};
    size_t len = 5;
    
    // Stampiamo l'array
    printf("Array: {");
    for (size_t i = 0; i < len; ++i) {
        printf("%d", arr[i]);
        if (i < len - 1) printf(", ");
    }
    printf("}\n\n");
    
    // ===== CALCOLO DEL MASSIMO =====
    printf("Calcolo del massimo...\n");
    int max_val;
    if (max_array(arr, len, &max_val) == 1) {
        printf("Massimo: %d (atteso 7)\n", max_val);
    } else {
        printf("Errore nel calcolo del massimo\n");
    }
    
    // ===== CALCOLO DELLA MEDIA =====
    printf("\nCalcolo della media...\n");
    double media_val;
    if (media_array(arr, len, &media_val) == 1) {
        printf("Media: %.1f (atteso 2.4)\n", media_val);
    } else {
        printf("Errore nel calcolo della media\n");
    }
    
    // ===== CONTEGGIO POSITIVI =====
    printf("\nConteggio elementi positivi...\n");
    int pos_count = conta_positivi(arr, len);
    if (pos_count >= 0) {
        printf("Positivi: %d (atteso 3)\n", pos_count);
    } else {
        printf("Errore nel conteggio\n");
    }
    
    // ===== RISULTATI FINALI =====
    printf("\n=== RISULTATI FINALI ===\n");
    printf("Massimo:       %d\n", max_val);
    printf("Media:         %.1f\n", media_val);
    printf("Positivi:      %d\n", pos_count);
    
    // ===== TEST BONUS: GESTIONE ERRORI =====
    printf("\n=================================\n");
    printf("TEST BONUS: Gestione degli errori\n");
    printf("=================================\n");
    
    // Test 1: Array NULL
    printf("\nTest 1: Array NULL\n");
    int dummy;
    if (max_array(NULL, len, &dummy) == 0) {
        printf("Correttamente rilevato errore: array NULL\n");
    }
    
    // Test 2: Lunghezza 0
    printf("\nTest 2: Lunghezza n == 0\n");
    if (max_array(arr, 0, &dummy) == 0) {
        printf("Correttamente rilevato errore: array vuoto\n");
    }
    
    // Test 3: Output NULL
    printf("\nTest 3: Puntatore output NULL\n");
    if (max_array(arr, len, NULL) == 0) {
        printf("Correttamente rilevato errore: output NULL\n");
    }
    
    // Test 4: Array con soli negativi
    printf("\nTest 4: Array con soli numeri negativi\n");
    int neg_arr[] = {-5, -2, -10};
    size_t neg_len = 3;
    int max_neg;
    if (max_array(neg_arr, neg_len, &max_neg) == 1) {
        printf("Massimo di array negativo: %d (atteso -2)\n", max_neg);
    }
    int pos_neg = conta_positivi(neg_arr, neg_len);
    printf("Positivi: %d (atteso 0)\n", pos_neg);
    
    // Test 5: Array con un solo elemento
    printf("\nTest 5: Array con un solo elemento\n");
    int single[] = {42};
    size_t single_len = 1;
    int max_single;
    double media_single;
    if (max_array(single, single_len, &max_single) == 1) {
        printf("Massimo: %d\n", max_single);
    }
    if (media_array(single, single_len, &media_single) == 1) {
        printf("Media: %.1f\n", media_single);
    }
   return 0;
}