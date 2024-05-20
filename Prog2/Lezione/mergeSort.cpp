#include <iostream>
using namespace std;

// usa l'algoritmo divide et impera
// l'input di dimensione n viene partizionato in due parti di lunghezza n/2
// le due sottosequenze vengono ordinate in maniera ricorsiva fino a quando si ottengono delle sequenze composte da un solo elemento
// a questo punto il merge unisce due sottosequenze ordinate
//? TODO: completare il file con il codice del libro

void _merge_(int array[], const size_t &begin, const size_t &mid, const size_t &end)
{
   size_t leftSize = mid - begin + 1;
   size_t rightSize = end - mid;

   int *leftArray = new int[leftSize];
   int *rightArray = new int[rightSize];

   for (int i = 0; i < leftSize; i++)
   {
      leftArray[i] = array[i + begin];
   }

   for (int i = 0; i < rightSize; i++)
   {
      rightArray[i] = array[i + mid + 1];
   }

   size_t leftIndex = 0;
   size_t rightIndex = 0;
   size_t arrayIndex = begin;

   while (leftIndex < leftSize && rightIndex < rightSize)
   {
      if (leftArray[leftIndex] < rightArray[rightIndex])
      {
         array[arrayIndex] = leftArray[leftIndex];
         leftIndex++;
      }
      else
      {
         array[arrayIndex] = rightArray[rightIndex];
         rightIndex++;
      }
      arrayIndex++;
   }

   while (leftIndex < leftSize)
   {
      array[arrayIndex] = leftArray[leftIndex];
      leftIndex++;
      arrayIndex++;
   }

   while (rightIndex < rightSize)
   {
      array[arrayIndex] = rightArray[rightIndex];
      rightIndex++;
      arrayIndex++;
   }

   delete[] leftArray;
   delete[] rightArray;
}

void _mergeSort_(int array[], const size_t &begin, const size_t &end)
{
   if (begin >= end)
      return;

   size_t mid = begin + (end - begin) / 2;

   _mergeSort_(array, 0, end - 1);
   _mergeSort_(array, mid + 1, end);

   _merge_(array, begin, mid, end);
}

void mergeSort(int array[], const size_t &size)
{
   _mergeSort_(array, 0, size - 1);
}

int main()
{
   int input[] = {4, 1, 5, 7, 9, 0};
   size_t size = sizeof(input) / sizeof(input[0]);

   mergeSort(input, size);
   for (size_t i = 0; i < size; i++)
   {
      cout << input[i] << " ";
   }

   cout << endl;
   return 0;
}