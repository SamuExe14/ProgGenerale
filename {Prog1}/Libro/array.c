#include <stdio.h>
#define SIZE 5 //* -> costante simbolica
int main()
{
     // // int array[12]; //! -> Crea un array con dodici elementi

     // // int array1 [100], b[50]; //? E' possibile inizializzare due array nella stessa istruzione
     // //-------------------------------------------------------------------------------------------------//

     // int n[5];

     // for (size_t i = 0; i < 5; ++i) //! size_t viene usata per rappresentare la dimensione o gli indici degli array
     // {
     //      n[i] = 0;
     //      printf("%4u%4d\n", i, n[i]);
     // }

     // int array1[5] = {1, 2, 3, 4, 5}; //? -> Si usano {} per inizializzare gli elementi dentro un'array

     // for (size_t j = 0; j < 5; ++j)
     // {
     //      printf("%d ", array1[j]);
     // }

     // int array2[10] = { 0 }; //? -> Inizializza tutti gli elementi di array2 a 0

     //      int array3[] = { 1,
     //                     2,
     //                     3,
     //                     4,
     //                     5,
     //                     6,
     //                     7,
     //                     8,
     //                     9,
     //                     10 }; //? Si può omettere la dimensione dell'array se vengono specificati gli elementi al suo interno

     // int array4[SIZE]; //! -> Usa la variabile simbolica per l'inizializzazione dell'array

     // //----------------------------------------------------------------------------------------------------------------------------//
     // char arrayString[] = "first"; //? -> Inizializza un array di char di cinque caratteri + \0 di terminazione


     char array0[20];
     scanf("%s", &array0); //!--> legge una stringa e la memorizza all'interno di array0; scanf legge un massimo di 19 char per non sforare con \0

     // for (size_t i = 0; i < 20; ++i){
     //      printf("%c", array0[i]);
     // }

     printf("%s", array0); // --> equivalente al ciclo for scritto sopra
//-----------------------------------------------------------------------------------//
     static int arrayX[34]; //!--> Inizializza un array statico che esiste per tutta la durata del programma a differenza
                              //!  di un array automatico che ogni volta che viene chiamata una funzione viene inizializzato di nuovo
                              
     modifyArray(array, arraySize); //-> passaggio di un array a una chiamata di funzione
     
     void modifyArray (int b[], int bSize); //? --> Si usa la seguente sintassi per far ricevere un array all'inizializzazione di una funzione

     const array[40]; //-> per rendere l'array costante nel tempo e non permettere a una funzione di modificare i suoi elementi
}

