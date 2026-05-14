/*
 * Esercizio 3 - File contatore.c
 *
 * Implementare due funzioni che si comportano in modo diverso pur
 * avendo lo stesso codice, salvo per la parola chiave "static".
 */

#include <stdio.h>

/* TODO: implementare conta_auto
 *
 * Deve avere una variabile locale "int n", inizializzata a 0,
 * incrementarla di 1, e stampare il messaggio
 *     "conta_auto: <valore>"
 * con printf usando il formato "conta_auto: %d\n".
 *
 * Importante: NON usare static.
 */
void conta_auto(void) {}

/* TODO: implementare conta_static
 *
 * Stesso codice di conta_auto, ma la variabile locale n deve essere
 * dichiarata con la parola chiave static:
 *     static int n = 0;
 * Stampare il messaggio "conta_static: %d\n".
 */
void conta_static(void) {}

/* TODO: dopo aver fatto compilare ed eseguire il programma, scrivete
 * qui sotto in un commento la spiegazione del comportamento osservato.
 *
 * Domanda guida: la variabile n si chiama uguale nei due casi.
 * Perche' allora conta_auto stampa sempre 1, mentre conta_static
 * stampa 1, 2, 3?
 *
 * Vostra risposta:
 *
 *
 */