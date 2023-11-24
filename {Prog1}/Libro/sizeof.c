#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr){
     return sizeof(ptr); //? --> sizeof() ritorna la dimensione del puntatore, non dell'elemento al quale punta
                         //? --> Su Windows e Linux sono 4 bytes, mentre su Mac è di 8 bytes
}

int main(){
     float array[SIZE];

     printf("The number in bytes in the array is %u"
          "\nThe number of bytes returned by getSize is %u\n", sizeof(array), getSize(array));
}