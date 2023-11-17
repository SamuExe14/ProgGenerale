#include <stdio.h>

int main()
{
    int x;
    int y;

    puts("Enter two numbers:");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("%d is larger than %d\n", x, y);
    }
    if (x < y)
    {
        printf("%d is larger than %d\n", y, x);
    }
    if (x == y)
    {
        printf("%d and %d are equals\n", x, y);
    }
}