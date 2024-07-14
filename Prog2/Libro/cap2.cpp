// #include <cstdio>
#include <iostream>
using namespace std;


int main(){
     enum Colori {Blu, Arancione, Viola}; // definisco con enum un nuovo tipo che può avere i seguenti valori

     Colori mioColore = Blu; // definisco una variabile con il tipo definito con enum

     enum Semaforo {Verde, Giallo = 10, Rosso};
     
     enum Bandiera {Italia, Spagna, Francia, Inghilterra};
     Bandiera verde = Italia;

     // Esercizio 2.3

     cout << "Oggi è giorno 14 aprile" << endl;

     // Esercizio 2.4
     cout << '\n' <<"Benvenuti in C++" << '\n' << "Cominceremo presto a programmare" << endl;
     

}
