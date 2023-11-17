#include <stdio.h>
#include <stdlib.h> //! contiene la funzione rand() e srand() al suo interno
#include <time.h>

int main()
{            //↓-> la funzione rand genera numeri pseudocasuali
     int i = rand(); //* -> assegna un valore a i da 0 a RAND_MAX
     int x = 1 + rand() % 6; //* -> assegna un valore a x da 0 a 6
//-------------------------------------------------------------------------//

     unsigned int seed;
     printf("Enter the seed: \n");
     scanf("%d", &seed);
     srand(seed) //* -> srand fornisce un seme a rand() per la generazione dei numeri casuali
//-------------------------------------------------------------------------//

     srand(time(NULL)) //! -> legge l'orologio di sistema e lo fornisce come seme per rand().
     int random = rand() % 10; //* -> userà il seed preso in input da srand

}