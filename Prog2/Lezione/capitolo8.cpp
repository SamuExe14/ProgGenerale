#include <cstdlib>
#include <iostream>
using namespace std;

struct Persona
{
   char nome[10];
   char cognome[20];
   int età;
};

int main()
{
   //? ALLOCAZIONE DINAMICA DI MEMORIA

   Persona persona1 = {"Samuele", "Leonardi", 20};

   Persona *persona2;
   persona2 = new Persona; //? viene usato il new al posto di malloc

   persona2->età = 20;

   cout << persona2->età << endl;

   delete(persona2);

   int i;
   cin >> i;
   Persona persone_array[i]; //* È possibile creare un array di struct in questo modo, ma non è consigliabile

   Persona* persone = new Persona[i]; //? Questo metodo è migliore e più portabile

   persone[1].età = 20;

   cout << persone[1].età;

   delete [] persone;

   persone[2].età = 10; //! errore: sto andando a modificare una parte di memoria che è già stata liberata

   cout << persone[2].età;
}