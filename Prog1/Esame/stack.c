#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
   int data;
   struct stack *nextPtr;
} Stack;

void push(Stack **topPtr, int data)
{
   Stack *newPtr = malloc(sizeof(Stack));

   if (newPtr != NULL)
   {
      newPtr->data = data; // inserisce il dato all'interno della struct
      newPtr->nextPtr = *topPtr;
      *topPtr = newPtr;
   }
   else
   {
      fprintf(stderr, "Memoria non disponibile");
      exit(EXIT_FAILURE);
   }
}
void printStack(Stack *topPtr)
{
   while (topPtr->nextPtr != NULL)
   {
      printf("|%d|\n", topPtr->data);
      topPtr = topPtr->nextPtr;
   }
   puts("NULL");
}

int pop(Stack **topPtr, int data)
{
   Stack *tempPtr = *topPtr;
   int popValue = (*topPtr)->data;
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);
   return popValue;
}

int main()
{
   Stack *stackPtr = NULL;

   int data;

   while (!feof(stdin))
   {
      scanf("%d", &data);
      push(&stackPtr, data);
   }

   printStack(stackPtr);
}