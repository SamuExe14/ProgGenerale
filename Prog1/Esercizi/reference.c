#include <stdio.h>

int cubeByReference(int *nPtr);
int cubeByValue(int number);

int main(){
     int n = 5;
     printf("Il cubo del numero passato per valore è %d\n", cubeByValue(n));
     printf("E il numero originario è %d\n", n);
     printf("Il numero modificato per riferimento è %d\n", cubeByReference(&n));
     printf("Il numero originario è stato modificato per riferimento %d\n", n);
}

int cubeByReference(int *nPtr){
     return *nPtr * *nPtr * *nPtr;
}

int cubeByValue(int number){
     return number * number * number;
}