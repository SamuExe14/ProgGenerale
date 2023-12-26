//* Il C vede i file come uno stream sequenziale di byte e ogni file termina con un marcatore di EOF.
//* All'apertura di un file vengono aperti automaticamente tre stream:
//* · Standard Input: riceve in input da tastiera
//* · Standard Output: stampa in output su schermo
//* · Standard Error: stampa messaggi d'errore

//* L'apertura di un file genera un puntatore a una struttura FILE

// fgetc(FILE *stream) //? legge un carattere da un file come getchar. La funzione riceve un puntatore a file come argomento

//   fputc('a', FILE *stream) //? equivalente a putchar, riceve il carattere da scrivere e lo stream dove scriverlo

//   fgets()

//   fputs()

//   fprintf(stdout, "%d ....", ......)

//   fscanf()


#include <stdio.h> //? Molte delle funzioni usate per i file sono definite in <stdio.h>

int main()
{
     FILE *cfPtr; //? Puntatore a una struttura file

     if ((cfPtr = fopen("client.txt", "w")) == NULL) //? Viene assegnato al puntatore la struttura del file con fopen() ricevendo il nome del file e la modalità di apertura "w"
     {                                               //? Se il puntatore al file ritorna NULL stampa un errore. Se client.txt esiste e viene aperto e scritto tutti i dati al suo interno verranno sovrascritti.
          puts("File could not be opened");
     }
     else
     {
          puts("Enter the account, name and balance");
          puts("Enter the EOF to end input");
          printf("%s", "? ");

          unsigned int account;
          char name[30];
          double balance;

          scanf("%d%29s%lf", &account, name, &balance);

          while (!feof(stdin)) //? Finché non viene immesso un EOF all'interno dello stdin continua a scrivere all'interno del file
          {
               fprintf(cfPtr, "%d %s %.2lf\n", account, name, balance);//? Equivalente al printf, ma può inviare i dati in uscita allo stdout usato come argomento nella funzione
               printf("%s", "? ");
               scanf("%d%29s%lf", &account, name, &balance);
          }
          fclose(cfPtr);//? Al termine dell'esecuzione del programma, fclose chiude l'esecuzione del programma. 
                        //? La funzione riceve in ingresso il puntatore al file per svolgere il suo compito. 
                        //? Se questa istruzione non viene fornita esplicitamente, sarà il sistema operativo a farlo in automatico.
     }
}

//! MODALITA' DI APERTURA DI UN FILE


