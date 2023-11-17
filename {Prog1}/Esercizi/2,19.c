#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    puts("Enter three integers");
    scanf("%d%d%d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    printf("The sum is %d\n", sum);

    float average = sum / 3;
    printf("The average is %.2f\n", average);

    printf("The product is %d\n", num1 * num2 * num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("The smallest is %d\n", num1);
    }

    if (num2 < num1 && num2 < num3)
    {
        printf("The smallest is %d\n", num2);
    }

    if (num3 < num1 && num3 < num2)
    {
        printf("The smallest is %d\n", num3);
    }
}