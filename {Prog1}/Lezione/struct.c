#include <stdio.h>
#include <stdlib.h>

// atexit provoca la terminazione immediata di un programma

void print(void);

int main(void)
{
     atexit(print); //? Alla terminazione del programmazione avvia la funzione print
     puts("Enter 1 to terminate program with function exit"
     "\nEnter 2 to terminate program normally");

     int answer;
     scanf("%d", &answer);

     if(answer == 1){
          puts("\nTerminating program with function exit");
          exit(EXIT_SUCCESS);
     }
}