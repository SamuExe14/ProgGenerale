#include <stdio.h>
#include <ctype.h>

// int main()
// {
     //! DEFINIZIONE DEI PUNTATORI
     // int *countPtr, count; //* -> countPtr è un puntatore all'indirizzo di memoria count, e punta indirettamente alla sua variabile
     // int y = 5;
     // int *yPtr = &y;
     // printf("%d\n", *yPtr);
     // //--------------------------------------------//

     // int a = 7;
     // int *aPtr = &a; // imposta aPtr all'indirizzo di a
     // printf("The address of a is %p"
     //        "\nThe value of aPtr is %p",
     //        &a, aPtr);
     // printf("\n\nThe value of a is %d"
     //        "\nThe value of *aPtr is %d",
     //        a, *aPtr);

     // printf("\n\nShowing that * and & are complements of "
     //        "each other\n&*aPtr = %p"
     //        "\n*&aPtr = %p\n",
     //        &*aPtr, *&aPtr);
     //--------------------------------------------------------//

//      //! PASSAGGIO DI UN PUNTATORE A UNA FUNZIONE

//      int number = 5; // inizializza number
//      printf("The original value of number is %d", number);
//      // passa l'indirizzo di number a cubeByReference
//      cubeByReference(&number);

//      printf("\nThe new value of number is %d\n", number);
// }

// cubeByReference(int *nPtr) //* --> viene passato un puntatore alla funzione per effettuare un passaggio per riferimento
//                               //*   --> ma come visto restituisce void, perché viene passato un puntatore 
// {
//,      *nPtr = *nPtr * *nPtr * *nPtr;
// }
// -----------------------------------------------------------------------------//

//! Puntatore NON costante a dati NON costanti --> massimo privilegio d'accesso

// void convertToUpperCase(char *sPtr)
// {
//      while (*sPtr != '\0')
//      {
//           *sPtr = toupper(*sPtr);
//           ++sPtr;
//      }
// }

// int main()
// {
//      char string[] = "characters and $32.98";

//      printf("\nThe string before conversion is: %s", string);
//      convertToUpperCase(string);
//      printf("\nThe string after conversion is: %s\n", string);
// }
//----------------------------------------------------------------//

//! Puntatore NON costante a dati COSTANTI

// void printCharacters(const char *sPtr){
//      for(; *sPtr != '\0'; ++sPtr){
//           printf("%c", *sPtr);
//      }
// }

// int main(){
//      char string[] = "print characters of a string";
     
//      puts("The string is:");
//      printCharacters(string);
//      puts("");
// }

//-----------------------------------------------------------------//

//! Puntatore non costante a dati COSTANTI

// void modify(const int *xPtr){

//,      *xPtr = 100;
// }

// int main(){

//      int y;

//      modify(&y); //? --> non può essere modificato perché dichiarato nella funzione come costante
// }

//! Puntatore COSTANTE a dati non costanti

// int main(){
//      int x;
//      int y;

//      int * const ptr = &x;

//      *ptr = 7; //? -> Permesso
//      // ptr = &y; //? ->Errore

//      printf("%d%d", *ptr, x);
// }

//! Puntatore COSTANTE a dati COSTANTI

int main(){
     int x = 5;
     int y;

     const int * const ptr = &x;

     printf("%d", *ptr);
     // *ptr = 7; //? --> Errore
     // ptr = &y; //? --> Errore
}

//! Array di puntatori a caratteri costanti

int main(){
     const char * suit[5] = { "Hearts", "Diamonds", "Spades", "Clubs", NULL}; //! --> Inizializza un'array di puntatori costante
     
     for(int x = 0; x < 4; x++){
          printf("%c ", *suit[x]);
     }
}