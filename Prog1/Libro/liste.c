#include <stdio.h>
#include <stdlib.h>

struct listNode
{
   char data;                // ogni listNode contiene un carattere
   struct listNode *nextPtr; // puntatore al nodo successivo
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);

int main(int argc, char **argv)
{

   ListNodePtr startPtr = NULL; // inzialmente non vi sono nodi
   char item;                   // char inserito dall'utente
   // instructions();              // stampa il menu per l'utente

   int choice;
   scanf("%d", &choice);

   while (choice != 3)
   {
      switch (choice)
      {
      case 1:
         printf("Inserire un carattere");
         scanf("%c", &item);
         insert(&startPtr, item); // inserisce item all'interno della lista
         break;
      case 2:
         if (!isEmpty(startPtr))
         {
            if (delete (&startPtr, item))
            {
               printf("%c deleted", item);
            }
            else
            {
               printf("%c not found", item);
            }
         }
         else
         {
            puts("List is empty");
         }
      }
   }
}

void insert(ListNodePtr *sPtr, char value) // inserisce un nuovo nodo nella listaim
{

   ListNodePtr newPtr = malloc(sizeof(ListNode)); // crea il nodo

   if (newPtr != NULL) // se c'è spazio disponibile
   {
      newPtr->data = value;
      newPtr->nextPtr = NULL;

      ListNodePtr previousPtr = NULL; // creo un nuovo nodo
      ListNodePtr currentPtr = *sPtr; // creo un altro nodo

      while (currentPtr != NULL && value > currentPtr->data) // cicla per trovare il posto corretto nella lista
      {
         previousPtr = currentPtr;         // va avanti
         currentPtr = currentPtr->nextPtr; // al nodo successivo
      }

      if (previousPtr == NULL) // inserisci il nuovo nodo all'inizio della lista
      {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      }
      else // inserisci il nuovo nodo tra previousPtr e currentPtr
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

char delete(ListNode **sPtr, char value)

{
   if (value == (*sPtr)->data) // cancella il primo nodo se viene trovata una corrispondenza
   {
      ListNodePtr tempPtr = *sPtr; // aggancia il nodo da rimuovere
      *sPtr = (*sPtr)->nextPtr;     // sfila il nodo
      free(tempPtr);               // libera il nodo
      return value;
   }
   else
   {
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;

      while (currentPtr != NULL && currentPtr->data != value) // ripeti il ciclo per trovare la posizione esatta
      {
         previousPtr = currentPtr;         // va avanti
         currentPtr = currentPtr->nextPtr; // al nodo successivo
      }
      if (currentPtr != NULL) // cancella il nodo che punta currentPtr
      {
         ListNodePtr tempPtr = *sPtr;
         *sPtr = (*sPtr)->nextPtr;
         free(tempPtr);
         return value;
      }
      return -1;
   }
}

int isEmpty(ListNodePtr sPtr){
   return sPtr == NULL;
} 