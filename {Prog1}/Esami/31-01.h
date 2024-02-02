#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decodeParameters(int argc, char *argv[]);

int readHeader(FILE *fPtr, char *argv[]);

double readFile(FILE *fPtr, int n, int m);

void decodeParameters(int argc, char *argv[])
{

     int param0 = strcmp(argv[1] + 6, "txt");
     int param1 = strcmp(argv[2] + 7, "txt");

     // printf("%s\n%s", argv[1], argv[2]);

     if (argc == 3)
     {
          if (param0 == 0 && param1 == 0)
          {
               puts("======A Stampa Parametri======");
               printf("input_filename = %s\n", argv[1]);
               printf("output_filename = %s\n\n", argv[2]);
          }
          else
          {
               printf("Inserire in input dei parametri che abbiano come estensione .txt");
          }
     }
     else
     {
          puts("Numero di argomenti non corretto,");
          puts("inserire in input due argomenti");
     }
}

int readHeader(FILE *fPtr, char *argv[])
{
     if ((fPtr = fopen(argv[1], "r")) == NULL)
     {
          puts("Non è stato possibile aprire il file");
     }
     else
     {
          int n, m;
          fscanf(fPtr, "%d%d", &n, &m);
          printf("======B Valori n e m======\n");
          printf("n = %d\nm = %d\n", n, m);
          // printf("%d\n%d", n, m);
          readFile(fPtr, n, m);
     }
}

double readFile(FILE *fPtr, int n, int m)
{
     float X[n][m];

     rewind(fPtr);
     // fseek(fPtr, 0, SEEK_SET);

     fscanf(fPtr, "\n%f%f", &X[0][0], &X[0][1]);
     printf("%f %f\n", X[0][0], X[0][1]);

     for (size_t i = 0; i < n; ++i)
     {
          for (size_t j = 0; j < m; ++j)
          {
               fscanf(fPtr, "%f", &X[i][j]);
               printf("%.2f ", X[i][j]);
          }
          puts("");
     }
}
