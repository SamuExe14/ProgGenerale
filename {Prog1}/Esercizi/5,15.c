#include <stdio.h>
#include <math.h>

float funcIpotenusa(float x, float y){
     float ipotenusa = sqrt(pow(x, 2) + pow(y, 2));

     return ipotenusa;
}

int main(){
     float cateto1;
     float cateto2;

     printf("Inserire la misura dei due cateti: \n");
     scanf("%f%f", &cateto1, &cateto2);

     printf("L'ipotenusa risulta: %.2fcm\n",funcIpotenusa(cateto1, cateto2));
}