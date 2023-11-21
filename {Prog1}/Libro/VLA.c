#include <stdio.h>

int main()
{
     puts("Enter size of a non-bidimensional array:");
     int arraySize;
     scanf("%d", &arraySize);

     int array0[arraySize];
     
     puts("Enter number of rows and columns in another 2-D array:");
     int row, col;
     scanf("%d%d", &row, &col);

     int array1[row][col];

     printf("sizeof(array0) yields array size of %d bytes\n", sizeof(array0)); //! -> viene usato il sizeof() per conoscere la dimensione di un array in bytes

}