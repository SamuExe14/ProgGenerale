#include <stdio.h>
#include <stdlib.h>

int main()
{
   double strtod(); // Converte la stringa nPtr in un double

   long strtol() // Converte la stringa nPtr in un long

   unsigned int strtoul() // Converte la stringa nPtr in un unsigned long

   int getchar(void); // Legge il carattere successivo dallo standard input e lo restituisce come intero

   char *fgets(); // Legge caratteri dallo stream specificato e li memorizza nell'array finché non incontra EOF

   char *strcpy() // Copia la stringa nell'array

   char *strcat(char *s1, const char *s2); // Aggiunge la stringa s2 in coda all'array s1 sovrascrivendo il carattere nullo di terminazione

   int strcmp(const char *s1, const char *s2) // confronta s1 e s2, restituisce 0 se sono uguali
}