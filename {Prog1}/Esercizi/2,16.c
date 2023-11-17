#include <stdio.h>

int main()
{
    int num1;
    int num2;

    puts("Enter the first number: ");
    scanf("%d", &num1);

    puts("Ente the second number: ");
    scanf("%d", &num2);

    printf("The sum is %d\n", num1 + num2);
    printf("The product is %d\n", num1 * num2);
    printf("The difference is %d with rest %d\n", num1 / num2, num1 % num2);
}
