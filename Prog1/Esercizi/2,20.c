#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float raggio;
    float pi = 3.14159;

    puts("Inserire il raggio del cerchio");
    scanf("%f", &raggio);

    float area = pow(raggio, 2) * pi;
    printf("L'area del cerchio è %.2f cm²\n", area);

    float circonferenza = (2 * pi) * raggio;
    printf("La circonferenza è %.2f cm\n", circonferenza);

    float diametro = raggio * 2;
    printf("Il diametro del cerchio è %.2f cm\n", diametro);
}
