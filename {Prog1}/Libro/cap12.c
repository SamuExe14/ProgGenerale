// #include <stdio.h>

// struct node{
//      int data;
//      struct node *nextPtr; // link per la prossima struct
//                          // se il link è un puntatore a NULL, questa segnerà la fine della lista.
// };

// newPtr = malloc(sizeof(struct node)); // alloca dinamicamente un blocco di byte equivalente a sizeof(struct node)
// free(newPtr); // libera la memoria precedentemente usata da newPtr;

// --------------------------------------------------------
//! Implementazione lista concatenata

#include <stdio.h>
#include <stdlib.h>

struct listNode
{
     int data;
     struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);

int main(int argc, char **argv)
{

     ListNodePtr startPtr = NULL;
     char item;
}

void insert(ListNodePtr *sPtr, char value)
{

     ListNodePtr newPtr = malloc(sizeof(ListNode)); // crea il nodo

     if (newPtr != NULL)
     {
          newPtr->data = value;
          newPtr->nextPtr = NULL;

          ListNodePtr previousPtr = NULL;
          ListNodePtr currentPtr = *sPtr;

          while (currentPtr != NULL && value > currentPtr->data)
          {
               previousPtr = currentPtr;
               currentPtr = currentPtr->nextPtr;
          }

          if (previousPtr == NULL)
          {
               newPtr->nextPtr = *sPtr;
               *sPtr = newPtr;
          }
          else
          {
               previousPtr->nextPtr = newPtr;
               newPtr->nextPtr = currentPtr;
          }
     }
     else
     {
          puts("char not inserted in the list");
     }
}

//! Implementazione di una pila (LIFO) --> Inserzioni ed eliminazioni in cima

#include <stdio.h>
#include <stdlib.h>

// struttura autorefer
struct stackNode
{
     int data;
     struct stackNode *nextPtr; // puntatore a stackNode
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

