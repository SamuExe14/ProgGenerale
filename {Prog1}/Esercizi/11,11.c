#include <stdio.h>

struct personData
{
     char lastName[15];
     char firstName[15];
     char age[4];
};

int main()
{
     FILE *filePtr;

     if ((filePtr = fopen("nameage.dat", "w")) == NULL)
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