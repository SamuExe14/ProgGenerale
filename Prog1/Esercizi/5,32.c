#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     srand(time(NULL));

     unsigned int soluzione = 1 + rand() % 1000;
     unsigned int risposta;

     printf("Indovina il numero da 0 a 1000: ");

     while (risposta != soluzione)
     {
          scanf("%d", &risposta);

          if (risposta < soluzione)
          {
               puts("Troppo basso, riprova");
          }
          if (risposta > soluzione)
          {
               puts("Troppo alto, riprova");
          }
     }
}