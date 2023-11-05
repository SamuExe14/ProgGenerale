#include <stdio.h>
#include <math.h>

int main (){
    /*
    do{
        istruzioni
    }while (condizione); //! In questo caso si mette ; 
    */

    unsigned counter = 1;

    do{
        printf("%u  ", counter);
    }while(++counter <= 10);
    
}

