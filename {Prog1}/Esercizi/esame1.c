#include <stdio.h>
#include <stdlib.h>
#include "esame1.h"

struct stackNode
{
     int data;
     struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

int main(int argc, char *argv[])
{
     readInput(argc, argv);
}