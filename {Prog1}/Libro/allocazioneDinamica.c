#include <stdio.h>

int main(int *argc, char **argv){
//* Allocazione statica: è la classica allocazione di memoria che avviene quando si dichiara una variabile
//* Allocazione dinamica: allocazione di memoria che avviene durante l'esecuzione del programma
//* Allocazione automatica: allocazione di memoria che avviene quando si dichiara una variabile all'interno di una funzione
//!MALLOC E FREE LEZIONE

malloc(); //alloca dinamicamente un blocco di memoria

double * arr = (double *) malloc(sizeof(double) * 10);
free(arr); //dealloca il blocco di memoria 

void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
//-----------------------------------------//

newPtr = malloc(sizeof(struct node)); //?--> Alloca dinamicamente un blocco di memoria equivalente al sizeof della struct 
                                   //?--> se non è disponibile un blocco di memoria sufficiente, restituisce NULL

free(newPtr); //?--> Dealloca il blocco di memoria puntato da newPtr

//!CALLOC E REALLOC

void *calloc(size_t nmemb, size_t size); //?--> Alloca dinamicamente un blocco di memoria equivalente a nmemb * size

//? calloc e malloc svolgono la stessa funzione, ma calloc azzera la memoria che alloca

void realloc(void *ptr, size_t size); //?--> Rialloca dinamicamente un blocco di memoria puntato da ptr, di dimensione size
}