#include <stdio.h>

int main()
{
    unsigned int hours_worked;
    float hourly_rate;
    float salary;
    while (hours_worked != -1)
    {
        printf("Enter # of hours worked ( -1 to end): ");
        scanf("%u", &hours_worked);
        if (hours_worked != -1)
        {
            printf("Enter hourly rate of the worker: ");
            scanf("%f", &hourly_rate);
            if (hours_worked <= 40)
            {
                salary = hourly_rate * hours_worked;
            }
            else
            {
                // hourly_rate += (hourly_rate * 0.5);
                salary = hours_worked * hourly_rate + (hourly_rate * 0.5);
            }
            printf("Salary is $%.2f\n\n", salary);
        }
    }
}