#include <stdio.h>

int maximum(int x, int y, int z)
{
     int max = x;

     if (y > max)
     {
          max = y;
     }
     
     if (z > max)
     {
          max = z;
     };

     return max;
}

int main()
{
     int int1, int2, int3;

     printf("Insert three integer: \n");
     scanf("%d%d%d", &int1, &int2, &int3);

     printf("The maximum is %d", maximum(int1, int2, int3));
}