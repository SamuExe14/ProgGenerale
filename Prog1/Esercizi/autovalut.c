#include <stdio.h>

/*//!1
f
f
v
v
v
f
v

f
f
f
//!2
printf("The value is %d\n", number);
scanf("%d%d", &number1, &number2);
if(c<7){
     printf("C is less than 7\n");
}
if(c >= 7){
     printf("C is greater than or equal to 7\n");
}
//!3
while(c <= 5){
     product *= c;
     ++c
}

scanf("%f", &value);

if(gender == 1){
     puts("Woman");
}else{
     puts("Man");
}

*/

// int main(){//!4

//      int sum, x;

//      x = 1;
//      sum = 0;

//      sum += x;
//      printf("The sum is %d", sum);
// }

/*//!5
f
v
switch
*/

//!6
/*
++zPtr non possibile(non inizializzato)
*zPtr = number;
number = zPtr[2];
for(size_t i = 0; i < 5; ++i){
     printf("%d", zPtr[i]);
}
number = sPtr;

*/

//!7
int main(){
     float number1 = 7.3;
     float number2;

     float *fPtr;
     fPtr = &number1;
     printf("%f", *fPtr);

     number2 = *fPtr;
     printf("\n%f\n", number2);

     printf("%p\n", number1);
     printf("%p", *fPtr);

     for(float y = 0.1; y != 1.0; y += 0.1){
          printf("%f\n", y);
     }
}

//!8
// ciclo infinito

//!9
/*
a) while (x<= 10){++x}
b)
c)case 1:
puts();
break;

default:
puts()
no break;
*/

//! 10

/*
a)funzione
b)funzione
c)file
d)blocco
e)prototipo di funzione
f)funzione
*/

//! 11

float hypotenuse(float side1, float side2){
     printf("%.2f");
}

smallest(int x, y, z){}