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
}