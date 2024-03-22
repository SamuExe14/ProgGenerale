#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char *argomento1;
   char *argomento2;
} record;

record *decodeParameters(int argc, char **argv, record *record1)
{
   if (argc < 3 || argc > 3)
   {
      fprintf(stderr, "Sono necessari due argomenti di tipo .txt\n");
      exit(EXIT_FAILURE);
   }
   else if (strcmp(argv[1] + 5, ".txt") != 0 || strcmp(argv[2] + 6, ".txt") != 0)
   {
      fprintf(stderr, "Inserire file .txt\n");
      exit(EXIT_FAILURE);
   }

   // record1 = malloc(sizeof(record));

   record1->argomento1 = argv[1];
   record1->argomento2 = argv[2];

   printf("==== A STAMPA PARAMETRI====\n");
   printf("%s %s\n", record1->argomento1, record1->argomento2);

   return 0;
}

int readHeader(FILE *filePtr){}

int main(int argc, char **argv)
{
   record *record1 = malloc(sizeof(record));

   decodeParameters(argc, argv, record1);

   FILE *fPtr;

   // printf("%s%s", record1->argomento1, record1->argomento2);
   readHeader(fPtr);


}