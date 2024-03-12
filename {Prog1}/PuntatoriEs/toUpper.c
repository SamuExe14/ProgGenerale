#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void toUpperCase(char *arrayPtr);

int main()
{
     char array[] = {"una semplice stringa 45 ciao"};

     char *arrayPtr = array;

     toUpperCase(arrayPtr);

     printf(arrayPtr); 
}

void toUpperCase(char *arrayPtr)
{
     while (*arrayPtr != '\0')
     {
          *arrayPtr = toupper(*arrayPtr);
          ++arrayPtr;
     }
}
