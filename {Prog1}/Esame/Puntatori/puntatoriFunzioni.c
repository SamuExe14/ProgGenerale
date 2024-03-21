#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int *nPtr);
void funzione(int array[]);
int main()
{
   //? In C si usano i puntatori per realizzare il passaggio per riferimento.
   //? Infatti quando si chiama una funzione con argomenti che devono essere modificati vengono passati gli indirizzi
   //! Ciò si realizza applicando & alla variabile il cui valore sarà modificato

   int number = 5;

   printf("Il numero originale ha il valore di %d\n", number);

   cubeByReference(&number); //? La funzione riceve l'indirizzo di una variabile intera come argomento

   printf("Il nuovo valore del numero è %d\n", number);

//--------------------------------------------------------------------------------//

   int array[5] = {1, 2, 3, 4, 5};

   printf("L'array è inizialmente così: ");

   for (size_t i = 0; i < 5; i++)
   {
      printf("%d ", array[i]);
   }

   funzione(array);

   printf("\nMentre dopo è così: ");

   for (size_t i = 0; i < 5; i++)
   {
      printf("%d ", array[i]);
   }
}

void cubeByReference(int *nPtr)
{
   *nPtr = *nPtr * *nPtr * *nPtr;
}

void funzione(int array[])
{
   for (size_t i = 0; i < 5; i++)
   {
      array[i] = array[i] + 5;
   }
}