#include <stdio.h>

int main()
{
    float gallons;
    float miles;
    int iterator = 0;
    float counter = 0;
    float average;
    //* Entro nel while

    while (gallons != -1)
    {
        puts("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

        if (gallons != -1)
        {
            puts("Enter the miles driven: ");
            scanf("%f", &miles);

            ++iterator;
            float miles_gallons = miles / gallons;

            printf("The miles/gallon for this tank was %.2f\n\n", miles_gallons);

            counter += miles_gallons;
        }
    }
    average = counter / iterator;
    printf("The overall average miles/gallon was %.2f", average);
}