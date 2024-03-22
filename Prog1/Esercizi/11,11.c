#include <stdio.h>

struct personData
{
     const char *lastName[15];
     const char *firstName[15];
     const int *age[4];
};

int main()
{
     FILE *filePtr;

     if ((filePtr = fopen("nameage.dat", "wb")) == NULL)
     {
          puts("File could not be opened");
     }
     else
     {
          struct personData blankPerson = {"Unassigned", "", "0"};

          for (unsigned int i = 0; i <= 100; ++i)
          {
               fwrite(&blankPerson, sizeof(struct personData), 1, filePtr);
          }

          while (!feof(stdin))
          {
               fprintf(filePtr, "%s%s%s", blankPerson.lastName, blankPerson.firstName, blankPerson.age);
               scanf("%s%s%s", blankPerson.lastName, blankPerson.firstName, blankPerson.age);
          }
          fclose(filePtr);
     }
}