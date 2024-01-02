//! STRUTTURE DINAMICHE DI DATI
#include <stdio.h>
#include <stdlib.h>

//! LISTE COLLEGATE
//* Sono collezioni di dati allineati in una riga e le inserzioni e cancellazioni avvengono ovunque
//* Gli elementi di una lista vengono chiamati nodi connessi da puntatori di collegamento (link).
//* Si accede a un elemento di una lista tramite un puntatore al primo nodo della lista e successivamente mediante gli altri puntatori
//* Per convenzione il puntatore di collegamento dell'ultimo nodo viene posto a NULL per segnare la fine della lista
//* Una lista collegata è appropriata quando il numero degli elementi da rappresentare non è prevedibile, infatti
// struttura autoreferenziale
struct listNode
{
     char data;
     struct listNode *nextPtr; // puntatore al nodo successivo
};

typedef struct listNode ListNode; // sinonimo per struct listNode
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main()
{
     ListNodePtr startPtr = NULL; // ancora non ci sono nodi nella lista
     char item;                   // char inserito dall'utente

     instructions();
     printf("? ");
     unsigned int choice; // stampa il menu e viene effettuata la scelta dall'utente
     scanf("%u", &choice);

     while (choice != 3)
     {
          switch (choice)
          {
          case 1:
               puts("Enter a character:");
               scanf("%c", &item);
               insert(&startPtr, item); // inserisce un elemento nella lista
               printList(startPtr);
               break;
          case 2: // cancella un elemento se la lista non è vuota
               if (!isEmpty(startPtr))
               {
                    printf("Enter a character to be deleted:");
                    scanf("\n%c", &item);

                    if (delete(&startPtr, item))
                    {
                         printf("%c deleted.\n", item); // rimuovi l'elemento
                         printList(startPtr);
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
               break;
          default:
               puts("Invalid choice\n");
               instructions();
               break;
          }
          printf("? ");
          scanf("%u", &choice);
     }
     puts("End of");
}

void instructions(void) // stampa le istruzioni per l'utente
{
     puts("Enter your choice:\n"
          "1 to insert an element into the list\n"
          "2 to delete an element from the list\n"
          "3 to end");
}

void insert(ListNodePtr *sPtr, char value) // inserisci un nuovo valore nella lista ordinata
{
     ListNodePtr newPtr = malloc(sizeof(ListNode)); // crea il nodo

     if (newPtr != NULL) // se c'è spazio disponibile
     {
          newPtr->data = value; // inserisci value nel nodo
          newPtr->nextPtr = NULL;

          ListNodePtr previousPtr = NULL;
          ListNodePtr currentPtr = *sPtr;

          while (currentPtr != NULL && value > currentPtr->data) // ripeti il ciclo per trovare la posizione corretta nella lista
          {
               previousPtr = currentPtr;         // va avanti ...
               currentPtr = currentPtr->nextPtr; // ... al nodo successivo
          }
          // inserisci il nuovo nodo all'inizio della lista
          if (previousPtr == NULL)
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
          printf("%c not inserted. No memory available\n", value);
     }
}

char delete(ListNodePtr *sPtr, char value) // cancella un elemento dalla lista
{
     if (value == (*sPtr)->data) // cancella il primo nodo della lista se viene trovata una corrispondenza
     {
          ListNodePtr tempPtr = *sPtr; // aggancia il nodo da rimuovere
          *sPtr = (*sPtr)->nextPtr;    // sfila il nodo
          free(tempPtr);               // libera il nodo e la memoria associata
          return value;
     }
     else
     {
          ListNodePtr previousPtr = *sPtr;
          ListNodePtr currentPtr = (*sPtr)->nextPtr;

          while (currentPtr != NULL && currentPtr->data != value) // riperti il ciclo per trovare la posizione corretta nella lista
          {
               previousPtr = currentPtr;         // va avanti ...
               currentPtr = currentPtr->nextPtr; // ... al nodo successivo
          }
          if (currentPtr != NULL) // cancella il nodo a cui punta currentPtr
          {
               ListNodePtr tempPtr = currentPtr;
               previousPtr->nextPtr = currentPtr->nextPtr;
               free(tempPtr);
               return value;
          }
     }
     return '\0';
}

int isEmpty(ListNodePtr sPtr) // restituisce 1 se la lista è vuota altrimenti 0
{
     return sPtr == NULL;
}

void printList(ListNodePtr currentPtr) // stampa la lista
{
     if (isEmpty(currentPtr)) // se la lista è vuota
     {
          puts("List is empty");
     }
     else
     {
          puts("The list is:");

          while (currentPtr != NULL) // finché non si raggiunge la fine della lista
          {
               printf("%c --> ", currentPtr->data);
               currentPtr = currentPtr->nextPtr;
          }
          puts("NULL\n");
     }
}

//! PILE
//* Le inserzioni e le cancellazioni avvengono sono nella sua cima
//! CODE
//* Le inserzioni vengono fatte nella sua testa e le rimozioni vengono fatte nella sua coda
//! ALBERI BINARI

//! ALLOCAZIONE DINAMICA DI MEMORIA
//* Per mantenere delle strutture dinamiche di dati che possono crescere e diminuire all'esecuzione si richiede un'allocazione di memoria dinamica.
//* Per effettuare questa operazione sono essenziali la malloc e l'operatore sizeof().

// struct node {
//      int data;
//      struct node *nextPtr; // *nextPtr è chiamato link perchè può essere usato per legare una struct di tipo struct node a un'altra dello stesso tipo
// };

// int main(){
// myPtr = malloc(sizeof(struct node)); //? Alloca dinamicamente una nuova area in memoria equivalente al sizeof(struct node) e memorizza un puntatore alla memoria allocata in newPtr.
//                                       //? Se la memoria non viene allocata malloc restituisce NULL
// free(myPtr); //? Libera la memoria e viene restituita al sistema
// }