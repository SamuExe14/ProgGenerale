#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
   int data;
   struct node *nextPtr;
} Node;

int main()
{
   Node *testa = malloc(sizeof(Node));
   testa->data = 4;

   Node *nodo1 = malloc(sizeof(Node));
   nodo1->data = 10;

   Node *nodo2 = malloc(sizeof(Node));
   nodo2->data = 14;

   testa->nextPtr = nodo1;
   nodo1->nextPtr = nodo2;
   nodo2->nextPtr = NULL;

   Node *currentPtr = testa;

   do
   {
      printf("%d ->", testa->data);
      testa = testa->nextPtr;
   }
   while(testa->nextPtr != NULL);
}