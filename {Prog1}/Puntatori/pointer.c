#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *countPtr; // La variabile countPtr è di tipo puntatore a int

   int y = 5;
   int *yPtr;

   yPtr = &y;
   printf("%d", *yPtr); // * restituisce il valore dell'oggetto al quale punta il suo operando. Ciò equivale a dereferenziare il puntatore

   int a = 7;
   int *aPtr = &a;

   printf("%p %p\n", &a, aPtr);
   printf("%d %d\n", a, *aPtr);

   
}
