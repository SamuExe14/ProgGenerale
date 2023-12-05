#include <stdio.h>

int main(int *argc, char **argv){
//Allocazione statica: è
//Allocazione dinamica:
//Allocazione automatica:

malloc(); //alloca dinamicamente un blocco di memoria

double * arr = (double *) malloc(sizeof(double) * 10);
free(arr); //dealloca il blocco di memoria 

void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
//-----------------------------------------//

newPtr = malloc(sizeof(struct node)); //?--> Alloca dinamicamente un blocco di memoria equivalente al sizeof della struct 
                                   //?--> se non è disponibile un blocco di memoria sufficiente, restituisce NULL

free(newPtr); //?--> Dealloca il blocco di memoria puntato da newPtr
}