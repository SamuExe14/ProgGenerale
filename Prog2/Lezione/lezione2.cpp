#include <cstddef>
#include <cstring>
#include <iostream>
using namespace std;

void f(int array[][3], size_t riga); // per passare un array a un prototipo di funzione, è necessario specificare almeno la seconda dimensione di esso

union codice{ // definizione di una union, somigliano molto alle struct
   //tipo_1 campo_1;
   //....
   //tipo_n campo_n

   int cod_n;
   char cod_a[4];
   bool cod_b;
};

int main()
{
   int array[7][10]; // per creare un array con doppio indice

   int tabella[2][3] = {51, 52, 53, 54, 55, 56}; // inizializzazione di un array con doppio indice

   int array1[5] = {0};
   // gli array vengono passati alle funzioni per riferimento

   // f(tabella, 5);

   codice miocodice;

   strcpy(miocodice.cod_a, "ABC");
   cout << miocodice.cod_a << endl;

   miocodice.cod_n = 10000;
   cout << miocodice.cod_n << endl;

   return 0;
}

void f(int array[][3], size_t riga) 
{
   for (size_t i = 0; i < riga; i++)
   {
      cout << array[i] << " ";
   }
}
