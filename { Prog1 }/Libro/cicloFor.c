#include <stdio.h>
#include <math.h>

int main()
{

    //* for(inizializzazione; condizione; incremento){
    //*         istruzione;
    //*    }

    // for (unsigned counter = 0; counter <= 10; ++counter){
    //     printf("%u ", counter);
    //     if(counter == 10)
    //         puts("");
    // }

    // Calcolo dell'interesse composto

    double principal = 1000.0; // capitale iniziale
    double rate = .05;         // tasso di interesse annuale

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (unsigned int year = 1; year <= 10; ++year) //calcola la qauntità in deposito per dieci anni 
    {
        double amount = principal * pow(1.0 + rate, year);
        printf("%4u%21.2f\n", year, amount);
    }
}