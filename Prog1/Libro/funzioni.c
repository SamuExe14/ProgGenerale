//! definizioni di funzioni

#include <stdio.h>

//int square(int y); //? prototipo di funzione
int square (int y ){ //? definizione della funzione
     return y * y;
}

int main(){

     for (int i = 0; i <= 10; ++i){
          printf("%d", square(i));
          puts("");
     }
     
}