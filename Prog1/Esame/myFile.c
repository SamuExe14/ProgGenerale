#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct parametri
{
   char input[PATH_MAX];
   char output[PATH_MAX];
} cmd_input;

typedef struct cliente
{
   char nome[255];
   char cognome[255];
   int numero_conto;
   int anno_apertura;
   float saldo;
   struct cliente *next;
} Cliente;

cmd_input *readInput(int argc, char **argv)
{
   if (argc != 3)
   {
      fprintf(stderr, "Inserire due parametri con estensione .txt\n");
      exit(EXIT_FAILURE);
   }
   else
   {
      cmd_input *param = (cmd_input *)malloc(sizeof(cmd_input));

      int len = strlen(argv[1]);

      if (argv[1][len - 1] == '\n')
      {
         argv[1][len - 1] = '\0';
      }

      if (strcmp(&argv[1][len - 4], ".txt") != 0)
      {
         fprintf(stderr, "I parametri devono essere di estensione .txt\n");
         exit(EXIT_FAILURE);
      }

      len = strlen(argv[2]);

      if (argv[2][len - 1] == '\n')
      {
         argv[2][len - 1] = '\0';
      }
      if (strcmp(&argv[2][len - 4], ".txt") != 0)
      {
         fprintf(stderr, "I parametri devono essere di estensione .txt\n");
         exit(EXIT_FAILURE);
      }

      strcpy(param->input, argv[1]);
      strcpy(param->output, argv[2]);

      return param;
   }
}

void push(){}

Cliente *readFile(char *input)
{
   FILE *fPtr;

   if ((fPtr = fopen(input, "r")) == NULL)
   {
      fprintf(stderr, "Non è stato possibile aprire il file");
      exit(EXIT_FAILURE);
   }
   else
   {
      char nome[255];
      char cognome[255];
      int numero_conto;
      int anno_apertura;
      float saldo;

      Cliente *nodoCliente = (Cliente *)malloc(sizeof(Cliente));
      Cliente *lista = NULL;

      while (fscanf(fPtr, "%s%s%d%d%f", nodoCliente->nome, nodoCliente->cognome, &nodoCliente->numero_conto,
                    &nodoCliente->anno_apertura, &nodoCliente->saldo) != EOF)
      {
         push(&lista, nodoCliente);
      }
   }
}
int main(int argc, char **argv)
{
   cmd_input *input = readInput(argc, argv);
   printf("==== PUNTO A ====\n");
   printf("input = %s\noutput = %s\n", input->input, input->output);

   Cliente *cliente = readFile(input->input)
}