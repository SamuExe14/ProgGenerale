#include <stdio.h>

int main(){
     unsigned int num_elementi;
     int somma = 0;
     int appoggio;

     printf("Inserire il numero di elementi che si vogliono inserire: ");
     scanf("%u", &num_elementi);

     printf("Inserire i numeri da sommare: \n");         

     for (int counter = 0; counter < num_elementi; ++counter){     
          
          scanf("%d", &appoggio);
          somma += appoggio;
          
     }
printf("La somma dei tuoi numeri è: %d\n", somma);

}