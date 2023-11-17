#include <stdio.h>

int main(){
     unsigned int num_elementi;
     int somma = 0;
     int appoggio;
     float media;

     printf("Inserire il numero di elementi che si vogliono inserire: ");
     scanf("%u", &num_elementi);

     printf("Inserire i numeri da sommare: \n");         

     for (int counter = 0; counter < num_elementi; ++counter){     
          
          scanf("%d", &appoggio);
          somma += appoggio;
     }
          media = somma / num_elementi;
printf("La somma dei tuoi numeri è: %d\n", somma);
printf("La media dei numeri è: %.2f", media);
}