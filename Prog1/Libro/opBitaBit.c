//* In C è possibile effettuare operazioni bitwise quali:
//* · & AND 
//* · | OR inclusivo = Usato per mettere specifici bit a 1 
//* · ^ OR esclusivo = Mette ogni bit nel risultato a 1 se un solo dei bit nei suoi due operandi è 1
//* · << shift a sinistra
//* · >> shift a destra
//* · ~ complemento a uno

//! ALGORITMO PER CONVERSIONE DA INTERO A BINARIO
#include <stdio.h>

void displayBits(unsigned int value);

int main()
{
     unsigned int x;

     printf("Enter a nonnegative int: ");
     scanf("%d", &x);

     displayBits(x);
}

void displayBits(unsigned int value)
{

     unsigned int displayMask = 1 << 31;
     printf("%27u = ", value);

     for (unsigned int c = 1; c <= 32; ++c)
     {
          printf(value & displayMask ? "1" : "0");
          value <<= 1;

          if (c % 8 == 0)
          {
               printf(" ");
          }
     }
     puts("");
}