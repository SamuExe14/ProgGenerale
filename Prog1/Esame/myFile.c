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
   struct cliente *link;
} Cliente;

typedef Cliente *ClientePtr;

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

ClientePtr *insertList(ClientePtr *l, Cliente *cliente1)
{
   Cliente *newPtr = malloc(sizeof(Cliente));
   // newPtr = cliente1;

   if (newPtr != NULL)
   {
      newPtr = cliente1;
      *l = newPtr;
      newPtr = *l;
   }
   return 0;
}

void printList(ClientePtr l)
{
   if (l == NULL)
   {
      printf("La pila è vuota\n");
   }
   else
   {
      while (l != NULL)
      {
         printf("%s %s %d %d %.2f\n", l->nome, l->cognome, l->numero_conto, l->anno_apertura, l->saldo);
         l = l->link;
      }
   }
}

ClientePtr readFile(char *input)
{
   FILE *fPtr;

   if ((fPtr = fopen(input, "r")) == NULL)
   {
      fprintf(stderr, "Non è stato possibile aprire il file\n");
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
      ClientePtr l;

      while (!feof(fPtr))
      {
         int counter = 0;
         fscanf(fPtr, "%s%s%d%d%f", nome, cognome, &numero_conto,
                &anno_apertura, &saldo);

         strcpy(nodoCliente->nome, nome);
         strcpy(nodoCliente->cognome, cognome);
         nodoCliente->numero_conto = numero_conto;
         nodoCliente->anno_apertura = anno_apertura;
         nodoCliente->saldo = saldo;
         // printf("%s %s %d %d %f\n", nodoCliente->nome, nodoCliente->cognome, nodoCliente->numero_conto,
         //        nodoCliente->anno_apertura, nodoCliente->saldo);

         // inserisco il nuovo cliente all'interno della lista con la funzione d'inserimento
         insertList(&l, nodoCliente);
         counter++;

         printList(l);
      }
      return l;
   }
   fclose(fPtr);
}

int main(int argc, char **argv)
{
   ClientePtr *cliente;
   cliente = (ClientePtr *)malloc(sizeof(ClientePtr));

   cmd_input *input = readInput(argc, argv);
   printf("==== PUNTO A ====\n");
   printf("input = %s\noutput = %s\n", input->input, input->output);

   printf("==== PUNTO B ====\n");

   // *cliente = //readFile(input->input);
   readFile(input->input);
   // printList(*cliente);
}