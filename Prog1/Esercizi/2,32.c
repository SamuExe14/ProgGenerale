#include <stdio.h>

int main()
{
    float altezza;
    float peso_Kg;

    puts("Inserire in ordine altezza in metri e peso in Kg");
    scanf("%f%f", &altezza, &peso_Kg);

    float BMI = peso_Kg / (altezza * altezza);
    printf("\nIl  BMI risultante mostra il seguente risultato: %.2f\n\n", BMI);

    puts("\nVALORI DEL BMI");
    puts("Sottopeso:\tmeno di 18.5");
    puts("Normale:\ttra 18.5 e 24.9");
    puts("Sovrappeso:\ttra 25 e 29.9");
    puts("Obeso:\t30 o oltre");
}