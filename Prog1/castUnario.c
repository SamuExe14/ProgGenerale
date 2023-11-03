#include <stdio.h>

int main(){
    //! Il C permette di effettuare una conversione esplicita di un tipo di dato

    int average;
    int total = 50;
    int counter = 30;

    average = (float) total / counter;

    printf("%f", (float) average);

}