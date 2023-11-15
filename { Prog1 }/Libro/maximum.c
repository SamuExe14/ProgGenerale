#include <stdio.h>

int maximum(int x, int y,int z){
     int max;

     if(x > y){
          max = x;
     } else if ( y > x){
          max = y;
     } else if (z > y){
          max = z;
     };
     
     return max;
}

int main(){
     int int1, int2, int3;

     printf ("Insert three integer: \n");
     scanf ("%d%d%d", &int1, &int2, &int3);
     
     printf("The meximum is %d", maximum(int1, int2, int3));
}