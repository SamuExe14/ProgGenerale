#include <stdio.h> //? Istruzione al preprocessore di includere la header di I/O stdio.h

//! Tutte le righe che cominciano per # sono elaborate dal preprocessore prima dell'esecuzione

int main(void){ //? funzione main presente in tutti i programmi C che restituisce un intero. Il void sta a significare che non prende nessuna informazione in input.

    printf("Hello World!\n"); //? stdout presente all'interno di stdio.h
    
    printf("La f sta per formattato\n");
    
    printf("\n \t \a \\ \""); //? Sequenze di escape per far fare qualcosa fuori dall'ordinario a printf

    
    //? Il compilatore non sa dove si trovino le librerie del C ma lo sa il linker, che genera a sua volta un eseguibile dopo aver verificato la presenza di errori. 
    /*
    per i commenti multilinea
    */
}