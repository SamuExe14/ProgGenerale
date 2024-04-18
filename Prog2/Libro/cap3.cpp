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
     cout << "Inserire l'ora in notazione di 24 ore" << endl;
     float ora;
     cin >> ora;

     ora -= 12;
     cout << "Sono le " << ora << endl;
}
