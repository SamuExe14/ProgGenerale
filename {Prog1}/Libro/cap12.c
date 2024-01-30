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

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);

int main()
{
     StackNodePtr stackPtr = NULL;
     int value;
}

void push(StackNodePtr *topPtr, int info)
{
     StackNodePtr newPtr = malloc(sizeof(StackNode));

     if (newPtr != NULL)
     {
          newPtr->data = info;
          newPtr->nextPtr = *topPtr;
          *topPtr = newPtr;
     }
     else
     {
          printf("%d Not inserted. No memory available", info);
     }
}

int pop(StackNodePtr *topPtr)
{
     StackNodePtr tempPtr = *topPtr;
     *topPtr = (*topPtr)->nextPtr;
     free(tempPtr);
     return popValue;
}

int isEmpty(StackNodePtr topPtr)
{
     return topPtr == NULL;
}

void printStack(StackNodePtr currentPtr)
{
     if (currentPtr == NULL)
     {
          puts("The stack is empty");
     }
     else
     {
          while (currentPtr != NULL)
          {
               printf("%d -> ", currentPtr->data);
               currentPtr = currentPtr->nextPtr;
          }
          puts("NULL");
     }
}

//! Implementazione di una coda

#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
     char data;
     struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void enqueue(StackNodePtr *headPtr, StackNodePtr *tailPtr, char value);
char dequeue(StackNodePtr *headPtr, StackNodePtr *tailPtr);

int main(void) {}

void enqueue(StackNodePtr *headPtr, StackNodePtr *tailPtr, char value)
{
     QueueNodePtr newPtr = malloc(sizeof(StackNode));

     if (newPtr != NULL)
     {
          newPtr->data = value;
          newPtr->nextPtr = NULL;
          if (!isEmpty(*headPtr))
          {
               *headPtr = newPtr;
          }
          else
          {
               (*tailPtr)->nextPtr = newPtr
          }
          tailPtr = newPtr;
     }
     else
     {
          puts("No memory available");
     }
}
char dequeue(StackNodePtr *headPtr, StackNodePtr *tailPtr)
{
     char value = (*tailPtr)->data;
     QueueNodePtr tempPtr = *headPtr;
     *headPtr = (*headPtr)->nextPtr;

     if (*headPtr == NULL)
     {
          *tailPtr = NULL;
     }
     free(tempPtr);
     return value;
}