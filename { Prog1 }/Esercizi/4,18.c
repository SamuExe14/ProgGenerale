#include <stdio.h>

int main(){
     int ast;

     printf("Inserire il numero di * da inserire nell'app: ");
     scanf("%d", ast);

     for (int i = 1; i <= ast; ++i){
          printf("*");
     }
     puts("");
}