#include <stdio.h>

struct inventarioData
{
     int record;
     char attrezzo[20];
     unsigned int quantità;
     float costo;
};

int main()
{
     FILE *filePtr;

     if ((filePtr = fopen("hardware.dat", "a+")) == NULL)
     {
          puts("File could not be opened");
     }
     else
     {
          struct inventarioData inventario = {0, "", 0, 0.0};

          puts("Inserire record, attrezzo, quantità e costo, EOF per terminare");
          // scanf("%d%s%u%f", inventario.record, inventario.attrezzo, inventario.quantità, inventario.costo);

          while (!feof(stdin))
          {
               fscanf(stdin, "%d%s%u%f", &inventario.record, inventario.attrezzo, &inventario.quantità, &inventario.costo);
               // fwrite(&inventario, sizeof(struct inventarioData), 1, filePtr);
               fprintf(filePtr, "%d %s %u %.2f\n", inventario.record, inventario.attrezzo, inventario.quantità, inventario.costo);
          }
          fclose(filePtr);
     }
}