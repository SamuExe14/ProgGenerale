//! COSTANTI DI ENUMERAZIONE

//* E' un insieme di costanti di enumerazione che rappresentano un nuovo "tipo":

// enum months
// {
//      JAN,
//      FEB,
//      MAR,
//      APR,
//      MAY,
//      JUN,
//      JUL,
//      AUG,
//      SEP,
//      OCT,
//      NOV,
//      DEC
// }; //? Crea un nuovo tipo di dato che va da 0 a 11

// enum months
// {
//      JAN = 1,
//      FEB,
//      MAR,
//      APR,
//      MAY,
//      JUN,
//      JUL,
//      AUG,
//      SEP,
//      OCT,
//      NOV,
//      DEC
// }; //! Facendo in questo modo vengono numerati da 1 a 12

#include <stdio.h>

enum months
{
     JAN = 1,
     FEB,
     MAR,
     APR,
     MAY,
     JUN,
     JUL,
     AUG,
     SEP,
     OCT,
     NOV,
     DEC
};

int main()
{
     const char *monthName[] = {"", "January", "February", "March",
                                "April", "May", "June", "July", "August", "September", "October",
                                "November", "December"};

     for(enum months month = JAN; month <= DEC; ++month){
          printf("%2d%11s\n", month,monthName[month]);
     }
}