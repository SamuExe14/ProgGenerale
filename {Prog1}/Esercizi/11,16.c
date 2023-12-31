#include <stdio.h>

int main()
{
     FILE *filePtr;

     if ((filePtr = fopen("datasize.dat", "w")) == NULL)
     {
          puts("File could not be opened");
     }
     else
     {
          fprintf(filePtr, "%+18s%+18s\n", "Data type","Size");
          fprintf(filePtr, "%+18s%+18u\n","char", sizeof(char));
          fprintf(filePtr, "%+18s%+18u\n","unsigned char", sizeof(unsigned char));
          fprintf(filePtr, "%+18s%+18u\n","short int", sizeof(short int));
          fprintf(filePtr, "%+18s%+18u\n","unsigned short int", sizeof(unsigned short int));
          fprintf(filePtr, "%+18s%+18u\n","int", sizeof(int));
          fprintf(filePtr, "%+18s%+18u\n","unsigned int", sizeof(unsigned int));
          fprintf(filePtr, "%+18s%+18u\n","long int", sizeof(long int));
          fprintf(filePtr, "%+18s%+18u\n","unsigned long int", sizeof(unsigned long int));
          fprintf(filePtr, "%+18s%+18u\n","float", sizeof(float));
          fprintf(filePtr, "%+18s%+18u\n","double", sizeof(double));
          fprintf(filePtr, "%+18s%+18u\n","long double", sizeof(long double));
          // fprintf(filePtr,"", sizeof());
     }
}