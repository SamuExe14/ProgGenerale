#include <stdio.h> 

int main(){
     

     for (unsigned x = 1; x <= 10; ++x){
          if(x == 5)
               break;

          printf("%u", x);
     }
     puts("");
     for(unsigned y = 0; y <=10; ++y){
          if(y == 5)
               continue;
               printf("%u", y);
     }
}