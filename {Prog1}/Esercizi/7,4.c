#include <stdio.h>

int main()
{
     float number1 = 7.3;
     float number2;

     float *fPtr = &number1;

     printf("Il valore di number1 è: %.2f", *fPtr);

     number2 = *fPtr;

     printf("\nIl valore di number2 è: %.2f", number2);
     printf("\nL'indirizzo di number1 è %p", &number1);
     printf("\nL'indirizzo di fPtr è %p", fPtr);
}
