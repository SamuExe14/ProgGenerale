#include <stdio.h>

float percentuale(float sales, float salary)
{
    salary = ((sales * 9) / 100) + 200;
    printf("%.2f\n", salary);
    return 0;
}

int main()
{
    float sales;
    float salary;
    while (sales != -1)
    {
        printf("Enter sales in dollars ( -1 to end): ");
        scanf("%f", &sales);
        if (sales != -1)
        {
            percentuale(sales, salary);
        }
    }
}
