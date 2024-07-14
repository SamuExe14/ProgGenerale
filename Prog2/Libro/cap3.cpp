#include <iostream>
// #include <cmath>
using namespace std;

int main()
{
     //! OPERATORI DI MANIPOLAZIONE DEI BIT

     //? operatori di spostamento
     // int variabile = 5;
     // variabile >> numero_posizioni
     // variabile << numero_posizioni
     //* operano uno scivolamento a destra o a sinistra di numero_posizioni

     //? esercizio 3.5

     // cout << "Inserire la temperatura in Celsius" << endl;
     // float celsius;
     // cin >> celsius;

     // float fahrenheit = celsius * ((float)9 / (float)5) + 32;
     // cout << "La temperatura in Fahrenheit è di " << fahrenheit << endl;

     // esercizio 3.8
     cout << "Inserire l'ora in notazione di 24 ore: ";
     int ora;
     cin >> ora;
     int minuti;
     cout << "Inserire minuti ";
     cin >> minuti;

     if (ora >= 12)
     {
          ora -= 12;
     }

     if (minuti < 0 || minuti > 60)
     {
          cerr << "Il formato non è valido, riprovare" << endl;
          exit(-1);
     }
     cout << "Sono le " << ora << ":" << minuti << endl;
}
