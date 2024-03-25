#include <stdio.h>
#include <stdlib.h>

struct clientData
{
   unsigned int acctNum;
   char lastName[15];
   char firstName[10];
   double balance;
};

int main()
{
   FILE *cfPtr;

   if ((cfPtr = fopen("account.txt", "w")) == NULL)
   {
      fprintf(stderr, "Il file non può essere aperto");
   }
   else
   {
      struct clientData blankClient = {0, "", "", 0.0};

      for (unsigned int i = 0; i < 100; ++i)
      {
         fwrite(&blankClient, sizeof(struct clientData), 1 , cfPtr);
      }
   }
   fclose(cfPtr);
}
