#include <stdio.h>

int main(){
    int integer1; //? definizione delle variabili senza inizializzazione
    int integer2;

    printf("Enter the first integer number:\n");
    scanf("%d", &integer1); //? scnaf prende in input da tastiera e inserisce con & nella locazione di memoria della variabile

    printf("Enter the second integer number:\n");
    scanf("%d", &integer2);

    printf("The sum of your number is: %d\n", integer1 + integer2);
}