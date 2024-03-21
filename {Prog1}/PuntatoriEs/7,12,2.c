#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main()
{
   void (*f[3])(int) = {function1, function2, function3};

   printf("Inserire un numero compreso tra 0 e 2, 3 per uscire\n");
   unsigned choice;
   scanf("%u", &choice);

   while (choice >= 0 && choice < 3)
   {
      (*f[choice])(choice);

      printf("Inserire un numero compreso tra 0 e 2, 3 per uscire\n");
      scanf("%u", &choice);
   }
}

void function1(int a)
{
   puts("È stata invocata la funzione n°0");
}
void function2(int b)
{
   puts("È stata invocata la funzione n°1");
}
void function3(int c)
{
   puts("È stata invocata la funzione n°2");
}