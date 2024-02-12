#include <stdio.h>
#include <stdlib.h>

void error(void)
{
   printf("Programma terminato\nInserire tre interi positivi\n");
}

int readInput(int argc, char *argv[])
{
   if (argc < 4)
   {
      atexit(error);
   }
   else if (argc > 4)
   {
      atexit(error);
   }
   else
   {
      int n, m, p;

      n = atoi(argv[1]);
      m = atoi(argv[2]);
      p = atoi(argv[3]);
      // printf("%d%d%d", n, m, p);
      return n,m,p;
   }
}