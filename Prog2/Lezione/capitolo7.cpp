//! PUNTATORI
#include <iostream>
using namespace std;

int main()
{
   int n;
   int *p;
   p = &n;

   *p = 75; // operatore di deferenziazione

   //? PUNTATORI A PUNTATORI

   int i = 100;
   int *ptr = &i;

   int **ptr2 = &ptr;
   **ptr2 = 4;

   cout << i << endl;

   int a = 10;
   int b = 20;

   int * const p_const = &a;
   
   // p_const = &b; //! errore: non è possibile modificare un puntatore costante

   *p = 5;
   
   // definisco un riferimento
   int& r = a; //? In C++ è possibile assegnare una variabile a un'indirizzo di memoria...
   //? ... così facendo sto definendo un alias

   r = 5;

   cout << "a = "<< a << endl;


}

//* Le funzioni possono restituire puntatori

int *max (int *pa, int *pb){
   if(*pa >= *pb)
      return pa;
   else 
      return pb;   
   
}