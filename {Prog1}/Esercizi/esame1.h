#include <stdio.h>
#include <stdlib.h>

int initA(int argc, char *argv[]);
int readInput(int argc, char *argv[]);

int readInput(int argc, char *argv[])
{
     if (argc < 4) // eseguo il controllo di argc per verificare se gli argomenti in input sono sufficienti
     {
          printf("Il numero di argomenti non è sufficiente\n");
          // exit(-1);
     }
     else if (argc == 4)
     {
          initA(argc, argv);
     }
}

int initA(int argc, char *argv[])
{
     int result[argc]; // creo un array dove mettere gli interi in input
     for (size_t i = 1; i < argc; i++)
     {
          result[i] = atoi(argv[i]);
     }
     int n = result[1];
     int m = result[2];
     int p = result[3];

     int A[n][m][p];
}

void initB() {}

void initStack() {}

void saveStack() {}