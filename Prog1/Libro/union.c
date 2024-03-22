//! UNION

//* A differenza delle struct, i membri delle union condividono lo stesso spazio di memoria
//* Le definizioni di unione vengono solitamente poste all'interno di un file di intestazione separato
// //* e incluso all'interno di tutti i file sorgente che usano il tipo unione
// union number
// {
//      int x;
//      double y;
// }; //? --> La definizione di una union segue le stesse regole delle struct

//* Un'unione può essere inizializzata con un valore dello stesso tipo del primo membro dell'unione

// union number value = {10}; //? --> La quantità di memoria per memorizzare un'unione è dipendente dall'implementazione,
//                            //? ma sarà sempre almeno tanto grande quanto quella richiesta dal membro più grande dell'unione.

#include <stdio.h>

union number
{
     int x;
     double y;
};

int main()
{
     union number value; //* Definisce la variabile di tipo union

     value.x = 100;
     // value.y = 45.5;

     printf("%d\n%f", value.x, value.y);
}