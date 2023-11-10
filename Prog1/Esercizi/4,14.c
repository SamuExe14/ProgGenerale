#include <stdio.h>

int main (){
     int input;
     long long int fattoriale = 1;
     
     printf("Inserire il numero per farne il fattoriale: \n");
     scanf("%d", &input);

     for (int i = 1; i <= input; ++i){
          fattoriale *= i;
          printf("Il fattoriale di 5 è: %lld\n", fattoriale);
     }
}