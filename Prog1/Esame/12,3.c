#include <stdio.h>
#include <stdlib.h>

struct listNode
{
   char data[255];
   struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
void printList(ListNodePtr sPtr);

int main()
{
   ListNodePtr startPtr = NULL; // inizialmente non ci sono nodi

   char item; // char che viene inserito dall'utente
   scanf("%s", &item);

   while (!feof(stdin))
   {
      insert(&startPtr, item);
      printf("Insert a character:\n");
      scanf("%s", &item);
   }
   printList(startPtr);
}

void insert(ListNodePtr *sPtr, char value)
{
   ListNodePtr newPtr = malloc(sizeof(ListNode)); // crea il nuovo nodo

   if (newPtr != NULL) // se c'è spazio disponibile
   {
      *newPtr->data = value;// inserisci value nel nodo
      newPtr->nextPtr = NULL;// il nodo non è collegato ad altri nodi

      ListNodePtr currentPtr = NULL;
      ListNodePtr previousPtr = *sPtr;


      while (currentPtr != NULL && value > *currentPtr->data)// ripeti il ciclo per trovare la posizione corretta nella lista
      {
         previousPtr = currentPtr;         // va avanti...
         currentPtr = currentPtr->nextPtr; // ... al nodo successivo
      }

      if (previousPtr == NULL) // inserisci il nuovo nodo all'inizio della lista
      {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      }
      else
      {  // inserisci il nuovo nodo tra previousPtr e currentPtr
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      }
   }
   else
   {
      fprintf(stderr, "%c not inserted. No memory available", value);
      exit(-1);
   }
}

char delete(ListNodePtr *sPtr, char value)
{
   if (&value == (*sPtr)->data) // se viene trovata una corrispondenza al primo nodo
   {
      ListNodePtr tempPtr = *sPtr; // aggancia il primo nodo
      *sPtr = (*sPtr)->nextPtr;    // sfila il nodo
      free(tempPtr);               // e lo libera
      return value;                // ritorna value al main
   }
   else
   {
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;

      while (currentPtr != NULL && *currentPtr->data != value)
      {
         previousPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;
      }

      if (currentPtr != NULL)
      {
         ListNodePtr tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free(tempPtr);
         return value;
      }
   }
   return '\0';
}

void printList(ListNodePtr sPtr)
{
   while (sPtr != NULL)
   {
      printf("%d -->", *sPtr->data);
      sPtr = sPtr->nextPtr;
   }
   puts("--> NULL");
}