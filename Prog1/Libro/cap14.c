#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct parameters
{
     int n;
     int m;
     int p;
};

int get(char *s)
{
     char **end = malloc(sizeof(char *));
     int num = (int)strtol(s, end, 0);

     if (!*end || num <= 0)
     {
          fprintf(stderr, "Errore: i parametri inseriti devono essere dei numeri interi positivi.\n");
          exit(-1);
     }
     return num;
}

struct parameters readInput(int argc, char *argv[])
{

     if (argc != 4)
     {
          fprintf(stderr, "Errore: il numero di parametri deve essere tre.\n");
          fprintf(stderr, "Uso corretto: %s n m p.\n", argv[0]);
          exit(-1);
     }

     struct parameters p = {get(argv[1]), get(argv[2]), get(argv[3])};
     return p;
}

int ***initArray(int n, int m, int p)
{

     int ***A = calloc(n, sizeof(int **));
     for (int i = 0; i < n; i++)
     {
          A[i] = calloc(m, sizeof(int *));
          for (int j = 0; j < m; j++)
          {
               A[i][j] = calloc(p, sizeof(int));
               for (int k = 0; k < p; k++)
               {
                    scanf("%d", &A[i][j][k]);
               }
          }
     }

     return A;
}

int **initB(int ***A, int n, int m, int p)
{

     int **B = calloc(n, sizeof(int *));

     for (int i = 0; i < n; i++)
     {
          int *max = &A[i][0][0];
          for (int j = 0; j < m; j++)
          {
               for (int k = 0; k < p; k++)
               {
                    if (A[i][j][k] > *max)
                         max = &A[i][j][k];
               }
          }
          B[i] = max;
     }
     return B;
}

struct node
{
     int data;
     struct node *next;
};

typedef struct node Node;

void push(Node **head, int x)
{
     Node *tmp = *head;
     *head = malloc(sizeof(Node *));
     (*head)->next = tmp;
     (*head)->data = x;
}

bool empty(Node *head)
{
     return head == NULL;
}

int pop(Node **head)
{
     if (empty(*head))
          return -1;

     int out = (*head)->data;
     Node *tmp = *head;
     *head = (*head)->next;
     free(tmp);
     return out;
}

Node **initStack(int **B, int n)
{

     Node **head = malloc(sizeof(Node *));

     *head = NULL;

     for (int i = 0; i < n; i++)
     {

          push(head, *B[i]);
     }

     return head;
}

void saveStack(Node **head)
{

     FILE *f = fopen("out.txt", "w");

     while (!empty(*head))
     {

          int x = pop(head);

          fprintf(f, "%d\n", x);
     }
}

int main(int argc, char *argv[])
{

     struct parameters p = readInput(argc, argv);

     int ***A = initArray(p.n, p.m, p.p);

     int **B = initB(A, p.n, p.m, p.p);

     Node **head = initStack(B, p.n);

     saveStack(head);
}