#include <stdio.h>
#include <ctype.h>

int main()
{

     int isblank(int c); //? --> Restituisce vero se c è uno spazio o una tabulazione, altrimenti falso

     int isdigit(int c); //? --> Restituisce vero se c è una cifra, altrimenti falso

     int isalpha(int c); //? --> Restituisce vero se c è una lettera, altrimenti falso

     int isalnum(int c); //? --> Restituisce vero se c è una lettera o una cifra, altrimenti falso

     int islower(int c); //? --> Restituisce vero se c è una lettera minuscola, altrimenti falso

     int isupper(int c); //? --> Restituisce vero se c è una lettera maiuscola, altrimenti falso

     int toupper(int c) //? --> Restituisce la lettera maiuscola corrispondente a c, se c è una lettera minuscola, altrimenti c

         int tolower(int c) //? --> Restituisce la lettera minuscola corrispondente a c, se c è una lettera maiuscola, altrimenti c

//! FUNZIONI DI CONVERSIONI DI STRINGHE
#include <stdlib.h>

         double strtod(const char *nptr, char **endptr); //? --> Converte la stringa nptr in un valore double.

     long strtol(const char *nptr, char **endptr, int base); //? --> Converte la stringa nptr in un valore long.

     unsigned long strtoul(const char *nptr, char **endptr, int base); //? --> Converte la stringa nptr in un valore unsigned long.
}

//! FUNZIONI DELLA LIBRERIA STANDARD INPUT/OUTPUT
#include <stdio.h>

int getchar(void); //? --> Legge un carattere dallo standard input e lo restituisce come un intero.

int putchar(int c); //? --> Scrive il carattere c sullo standard output e lo restituisce come un intero.

char *fgets(char *s, int n, FILE *stream); //? --> Legge caratteri dallo stream e li memorizza nell'array s finché non si incontra \n o EOF.

int sprintf(char *s, const char *format, ...); //? --> Equivalente a printf, ma scrive la stringa risultante nell'array s.

int sscanf(char *s, const char *format, ...); //? --> Equivalente a scanf, ma legge i dati dall'array s piuttosto che dalla tastiera.

//! FUNZIONI FGETS E PUTCHAR
{
#include <stdio.h>
#define SIZE 80

     void reverse(const char *const sPtr);

     int main()
     {
          char sentence[SIZE];

          puts("Enter a line of text");
          fgets(sentence, SIZE, stdin);

          printf("\n%s", "The line printed backward is: ");
          reverse(sentence);
     }
}

void reverse(const char *const sPtr)
    // {
    //      if ('\0' == sPtr[0])
    //      {
    //           return;
    //      }
    //      else
    //      {
    //           reverse(&sPtr[1]);
    //           putchar(&sPtr[0]);
    //      }
    // }

    //! FUNZIONI PER IL TRATTAMENTO DELLE STRINGHE

    char *strcpy(char *s1, const char *s2) //? --> Copia la stringa s2 nell'array s1

    char *strncpy(char *s1, const char *s2, size_t n) //? --> Copia al massimo n caratteri della stringa s2 nell'array s1

    char *strcat(char *s1, const char *s2) //? --> Concatena la stringa s2 alla fine della stringa s1

    char *strncat(char *s1, const char *s2, size_t n) //? --> Concatena al massimo n caratteri della stringa s2 alla fine della stringa s1
