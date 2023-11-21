#include <stdio.h>
#include <stdlib.h>

int lancioDadi(int dado1, int dado2)
{
     for (int i = 0; i <= 36000; ++i)
     {
          dado1 = 1 + rand() % 6;
          dado2 = 1 + rand() % 6;
     }

     return dado1 + dado2;
}

int main()
{
     int dado1, dado2;
     int arrayDadi[11] = {0};

     lancioDadi(dado1, dado2);

     int counter2, counter3, counter4, counter5, counter6, counter7;
     
     for(int i = 0; i < 11; ++i){
          printf("%d ", arrayDadi[i]);
     }

}