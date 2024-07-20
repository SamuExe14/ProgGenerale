//* Si legga da tastiera una tabella di
//* 4 righe per 5 colonne di elementi interi e dopo
//* la lettura la visualizzi a schermo

#include <iostream>
using namespace std;
#define RIGHE 4
#define COLONNE 5

int main()
{
     int array[RIGHE][COLONNE];

     cout << "Inserire i valori all'interno dell'array" << endl;
     
     for (size_t i = 0; i < RIGHE; i++)
     {
          for (size_t j = 0; j < COLONNE; ++j)
          {
               cin >> array[i][j];
          }
     }

     for (size_t i = 0; i < RIGHE; i++)
     {
          for (size_t j = 0; j < COLONNE; ++j)
          {
               cout << array[i][j] << " ";
          }
          cout << endl;
     }
}