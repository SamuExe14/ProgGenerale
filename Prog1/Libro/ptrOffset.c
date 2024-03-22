#include <stdio.h>

int main(){

     int b[5];
     int *bPtr;

     bPtr = b; 
     bPtr = &b[0]; //? -> Queste due istruzioni sono equivalenti
     *(bPtr + 3) //! per far puntare bPtr al terzo elemento di b[]. Il 3 si chiama offset

     bPtr[1] //! Se bPtr ha il valore di b si riferisce all'elemento b[1] dell'array
}