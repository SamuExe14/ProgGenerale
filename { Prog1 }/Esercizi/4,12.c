#include <stdio.h>

int main(){
     int somma = 0;
     
     for(int i = 0; i <= 30; i += 2){
          somma += i;
          printf("%d\n", somma);
     }
}