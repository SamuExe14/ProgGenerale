#include <stdio.h>

union number
{
     int x;
     float y;
};

int main(){
     union number value;
     value.x = 4;
     value.y = 125.25;

     printf("%d %f", value.x, value.y);
}