#include <stdio.h>

int main(int)
{

    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades");
    puts("Enter the EOF character to end input");
    int grade;

    while ((grade = getchar()) != EOF) //? finché non viene immesso il caratterer di EOF legge i caratteri dallo stdin
    {
        switch (grade)
        {
        case 'A':   //? per ogni case viene eseguita un'istruzione e finisce con break;
        case 'a':
            ++aCount;
            break;

        case 'B':
        case 'b':
            ++bCount;
            break;

        case 'C':
        case 'c':
            ++cCount;
            break;

        case 'D':
        case 'd':
            ++dCount;
            break;

        case 'F':
        case 'f':
            ++fCount;
            break;

        case '\n': //? vengono ignorati tutti quanti i caratteri di newline, tabulazione e spaziamento;
        case '\t':
        case ' ':
            break;

        default: //? Viene mostrato un messaggio d'errore nel caso in cui venga immesso un carattere che non è all'interno dei case;
            puts("Incorrect letter grade entered");
            puts("Enter a new grade");
            break;
        }
    }
//? Dopo aver immesso il carattere di EOF (CTRL + D su linux )vengono stampati tutti i dati fin'ora registrati, ma a me ovviamente non funziona ;) lol.
    puts("Total for each letters grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}